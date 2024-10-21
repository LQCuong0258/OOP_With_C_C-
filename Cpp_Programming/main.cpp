#include <iostream>
#include <cstdint>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee {
    private:
    string Company;
    int Age;

    protected:
    string Name;

    public:
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void setName(string name) {
        Name = name;
    }

    string getName() {
        return Name;
    }

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    void AskForPromotion() {
        if (Age > 30) cout << Name << " got promoted" << endl;
        else cout << Name << " NO promotion for you" << endl;
    }

    virtual void Work() {
        cout<< Name << " checking email" << endl;
    }
};

class Developer: public Employee {
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,
              string favprogramminglanguage): Employee(name, company, age)
    {
        FavProgrammingLanguage = favprogramminglanguage;
    }

    void FixBug() {
        cout<< Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }

    void Work() {
        cout<< Name << " is writing " << FavProgrammingLanguage << " code" << endl;
    }
};

class Teacher: public Employee {
    public:
    string Subject;

    Teacher(string name, string company, int age, string subject): Employee(name, company, age)
    {
        Subject = subject;
    }          

    void PrepareLesson() {
        cout<< Name << " is preparing " << Subject << " lesson" << endl;
    }

    void Work() {
        cout<< Name << " is teaching " << Subject << endl;
    }
};

int main()
{
    // Employee employee1;
    // Employee employee2;

    // employee1.Name = "Saldina";
    // employee1.Company = "Youtube";
    // employee1.Age = 25;

    // employee2.Name = "John";
    // employee2.Company = "Amazon";
    // employee2.Age = 35;

    // Employee employee1 = Employee("Saldina", "Youtube", 25);
    // Employee employee2 = Employee("John", "Amazon", 35);

    // employee1.IntroduceYourself();
    // employee2.IntroduceYourself();

    // employee1.AskForPromotion();
    // employee2.AskForPromotion();
    
    // Developer developer = Developer("Saldina", "Youtube", 25, "C++");
    // developer.FixBug();
    // developer.AskForPromotion();

    // Teacher teacher = Teacher("Jack", "UTE", 35, "History");
    // teacher.PrepareLesson();
    // teacher.AskForPromotion();

    Developer developer = Developer("Saldina", "Youtube", 25, "Python");
    Teacher teacher = Teacher("Jack", "UTE", 35, "Math");

    // developer.Work();
    // teacher.Work();

    Employee* employees[] = {&developer, &teacher, 0};

    for (int8_t i = 0; employees[i] != 0; i++){
        employees[i]->Work();
    }

    return 0;
}