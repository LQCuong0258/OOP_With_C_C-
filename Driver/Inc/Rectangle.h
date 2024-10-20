#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

typedef struct {
    Shape super; /* Inherited Shape */

    float width;
    float height;
} Rectangle;

void Rectangle_Init (Rectangle * const object,
                     int16_t x0, int16_t y0,
                     float width, float height);
float Rectangle_area (Rectangle const * const object);

#endif // RECTANGLE_H
