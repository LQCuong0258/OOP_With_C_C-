#include "Rectangle.h"

void Rectangle_Init (Rectangle * const self,
                     int16_t x, int16_t y,
                     char* name,
                     float width, float height)
{
    static const struct ShapeVtable vtable = {
        (float (*) (Shape const * const self)) &Rectangle_area,
        (float (*) (Shape const * const self)) &Rectangle_perimeter
    };

    Shape_Init(&self->super, name, x, y); /* Initialize Shape */
    self->super.vptr = &vtable;
    self->Width = width;
    self->Height = height;
}

float Rectangle_area (Rectangle const * const self) {
    return self->Width * self->Height;
}

float Rectangle_perimeter (Rectangle const * const self) {
    (void) self; /* Unused parameter */
    return 2 * (self->Width + self->Height);
}