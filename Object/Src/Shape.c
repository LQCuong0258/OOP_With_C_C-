#include "Shape.h"

static float Shape_area (Shape const * const self);

void Shape_Init (Shape * const self, int16_t x, int16_t y)
{
    static const struct ShapeVtable vtable = {
        &Shape_area
    };
    
    self->vptr = &vtable;
    self->x = x;
    self->y = y;
}

void Shape_Print (Shape * const self)
{
    printf("Center of shape: (%d; %d)\r\n", self->x, self->y);
}

static float Shape_area (Shape const * const self)
{
    (void) self; /* Unused parameter */
    return 0U;
}

void Calc_area (Shape const * graph[])
{
    for (uint8_t i = 0; graph[i] != (Shape *) 0 ; i++)
    {
        printf("Area of shape: %0.2f\r\n", Shape_area_vcall(graph[i]));
    }
}
