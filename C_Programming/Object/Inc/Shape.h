#ifndef SHAPE_H
#define SHAPE_H

#include <stdio.h>
#include <stdint.h>

typedef struct {
    struct ShapeVtable const * vptr; /* Virtual pointer */
    
    char* Name;
    int16_t X;
    int16_t Y;
} Shape;

struct ShapeVtable {
    float (*area) (Shape const * const self);
    float (*perimeter) (Shape const * const self);
};

void Shape_Init (Shape * const shape, char* name, int16_t x, int16_t y);
void Shape_Print (Shape * const shape);

// Virtual calls (late blinding)
static inline float Shape_area_vcall (Shape const * const self)
{
    return (*self->vptr->area) (self);
}

static inline float Shape_perimeter_vcall (Shape const * const self)
{
    return (*self->vptr->perimeter) (self);
}

/* Macro là cách dùng thay thế cho inline bên trên
nhược điểm là không yêu cầu kiểu dữ liệu của biến vào */
// #define SHAPE_AREA_VCALL (* (self)->vptr->area) (self)

#endif // SHAPE_H
