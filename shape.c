#include <stdio.h>
#include "shape.h"

void Shape_Init (Shape * const shape, int16_t x, int16_t y)
{
    shape->x = x;
    shape->y = y;
}

void Shape_Print (Shape * const shape)
{
    printf("Center of shape: (%d; %d)\r\n", shape->x, shape->y);
}