#include "shape.h"

int main()
{
    Shape shape;

    Shape_Init(&shape, 10, 20);
    Shape_Print(&shape);

    return 0;
}