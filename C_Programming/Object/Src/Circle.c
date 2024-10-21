#include "Circle.h"

void Circle_Init (Circle * const self,
                  int16_t x, int16_t y,
                  char* name, float radius)
{
    static const struct ShapeVtable vtable = {
        (float (*) (Shape const * const self)) &Circle_area,
        (float (*) (Shape const * const self)) &Circle_perimeter
    };

    Shape_Init(&self->super, name, x, y); /* Initialize Shape */
    self->super.vptr = &vtable;
    self->super.Name = name;
    self->Radius = radius;
}
float Circle_area (Circle const * const self) {
    return pi * self->Radius * self->Radius;
}
float Circle_perimeter (Circle const * const self) {
    return 2 * pi * self->Radius;
}