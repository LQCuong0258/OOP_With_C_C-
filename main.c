#include "Shape.h"
#include "Rectangle.h"

int main()
{
    Shape shape;
    Rectangle rectangle;

    Shape_Init(&shape, 1, 22);
    Shape_Print(&shape);

    Rectangle_Init(&rectangle, 10, 2, 10., 10.);

    Shape const * graph[] = {
        &shape,
        (Shape *) &rectangle
    };

    Calc_area(graph);
    // float area = Rectangle_Area(&rectangle);
    // printf("Area of Rectangle: %.2f", area);

    return 0;
}