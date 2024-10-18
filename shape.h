#include <stdio.h>
#include <stdint.h>

typedef struct {
    int16_t x;
    int16_t y;
} Shape;

typedef struct {
    Shape super; /* Inherited Shape */

    float width;
    float height;
} Rectangle;



void Shape_Init (Shape * const shape, int16_t x, int16_t y);
void Shape_Print (Shape * const shape);

void Rectangle_Init (Rectangle * const object,
                     int16_t x0, int16_t y0,
                     float width, float height);
float Rectangle_Area (Rectangle const * const object);