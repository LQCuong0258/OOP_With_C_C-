#include "shape.h"

int main()
{
    Shape shape;
    Rectangle rectangle;

    Shape_Init(&shape, 15, 22);
    Shape_Print(&shape);

    Rectangle_Init(&rectangle, 10, 20, 5., 10.);
    float area = Rectangle_Area(&rectangle);
    printf("Area of Rectangle: %f", area);

    return 0;
}