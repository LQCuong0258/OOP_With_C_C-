#include "Shape.h"

static float Shape_area (Shape const * const self);
static float Shape_perimeter (Shape const * const self);

void Shape_Init (Shape * const self, char* name, int16_t x, int16_t y)
{
    static const struct ShapeVtable vtable = {
        &Shape_area,
        &Shape_perimeter
    };
    
    self->vptr = &vtable;
    self->Name = name;
    self->X = x;
    self->Y = y;
}

void Shape_Print (Shape * const self) {
    printf("Point: (%d; %d)\r\n", self->X, self->Y);
}

static float Shape_area (Shape const * const self) {
    (void) self; /* Unused parameter */
    return 0U;
}

static float Shape_perimeter (Shape const * const self) {
    (void) self; /* Unused parameter */
    return 0U;
}
