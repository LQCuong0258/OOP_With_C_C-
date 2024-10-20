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

void Rectangle_Init (Rectangle * const self,
                     int16_t x0, int16_t y0,
                     float w, float h)
{
    Shape_Init(&self->super, x0, y0); /* Initialize Shape */
    self->width = w;
    self->height = h;
}

float Rectangle_Area (Rectangle const * const self)
{
    return self->width * self->height;
}