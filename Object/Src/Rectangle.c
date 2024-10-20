#include "Rectangle.h"

void Rectangle_Init (Rectangle * const self,
                     int16_t x0, int16_t y0,
                     float w, float h)
{
    static const struct ShapeVtable vtable = {
        (float (*) (Shape const * const self)) &Rectangle_area
    };

    Shape_Init(&self->super, x0, y0); /* Initialize Shape */
    self->super.vptr = &vtable;
    self->width = w;
    self->height = h;
}

float Rectangle_area (Rectangle const * const self)
{
    return self->width * self->height;
}