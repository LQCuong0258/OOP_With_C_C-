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

void Rectangle_Init (Rectangle * const object,
                     int16_t x0, int16_t y0,
                     float w, float h)
{
    Shape_Init(&object->super, x0, y0); /* Initialize Shape */
    object->width = w;
    object->height = h;
}

float Rectangle_Area (Rectangle const * const object)
{
    float area = 0;

    area = object->width * object->height;

    return area;
}