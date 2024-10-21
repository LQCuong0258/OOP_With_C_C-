#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main()
{
    Shape shape;
    Rectangle rectangle;
    Circle circle;

    Shape_Init(&shape, "Point", 1, -2);
    Shape_Print(&shape);

    Rectangle_Init(&rectangle, 10, 2, "Rectangle", 12.5, 10.);
    Circle_Init(&circle, 7, -5, "Circle", 5.);

    Shape const * graph[] = {
        &shape,
        (Shape *) &rectangle,
        (Shape *) &circle,
        (Shape *) 0
    };

    for (uint8_t i = 0; graph[i] != (Shape *) 0 ; i++)
    {
        printf("Area of %s: %0.2f\r\n", graph[i]->Name, Shape_area_vcall(graph[i]));
        printf("Perimeter of %s: %0.2f\r\n", graph[i]->Name, Shape_perimeter_vcall(graph[i]));
        printf("\r\n");
    }

    return 0;
}