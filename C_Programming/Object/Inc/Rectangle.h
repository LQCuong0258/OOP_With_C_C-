#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

typedef struct {
    Shape super; /* Inherited Shape */

    float Width;
    float Height;
} Rectangle;

void Rectangle_Init (Rectangle * const object,
                     int16_t x, int16_t y,
                     char* name,
                     float width, float height);
float Rectangle_area (Rectangle const * const self);
float Rectangle_perimeter (Rectangle const * const self);

#endif // RECTANGLE_H
