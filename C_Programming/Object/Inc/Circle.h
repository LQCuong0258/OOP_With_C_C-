#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

#define pi  3.1415

typedef struct {
    Shape super; /* Inherited Shape */

    float Radius;
} Circle;

void Circle_Init (Circle * const self,
                     int16_t x, int16_t y,
                     char* name, float radius);
float Circle_area (Circle const * const self);
float Circle_perimeter (Circle const * const self);

#endif // CIRCLE_H
