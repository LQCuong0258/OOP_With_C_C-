#ifndef SHAPE_H
#define SHAPE_H

#include <stdio.h>
#include <stdint.h>

typedef struct {
    struct ShapeVtable const * vptr; /* Virtual pointer */
    
    int16_t x;
    int16_t y;
} Shape;

struct ShapeVtable {
    float (*area) (Shape const * const self);
};

void Shape_Init (Shape * const shape, int16_t x, int16_t y);
void Shape_Print (Shape * const shape);

// Virtual calls (late blinding)
static inline float Shape_area_vcall (Shape const * const self)
{
    return (*self->vptr->area) (self);
}

/* Macro là cách dùng thay thế cho inline bên trên
nhược điểm là không yêu cầu kiểu dữ liệu của biến vào */
// #define SHAPE_AREA_VCALL (* (self)->vptr->area) (self)

void Calc_area (Shape const * graph[]);

#endif // SHAPE_H
