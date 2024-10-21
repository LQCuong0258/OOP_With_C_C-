#include <iostream>

using namespace std;

class Employee {
    public:
        string Name;
        string Company;
        int Age;

        void IntroduceYourself() {
            cout << "Name - " << Name << endl;
            cout << "Company - " << Company << endl;
            cout << "Age - " << Age << endl;
        }

        Employee(string name, string company, int age) {
            Name = name;
            Company = company;
            Age = age;
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

    Employee employee1 = Employee("Saldina", "Youtube", 25);
    Employee employee2 = Employee("John", "Amazon", 35);

    employee1.IntroduceYourself();
    employee2.IntroduceYourself();

    
    return 0;
}