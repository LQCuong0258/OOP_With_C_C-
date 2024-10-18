#include <stdint.h>

typedef struct {
    int16_t x;
    int16_t y;
} Shape;


void Shape_Init (Shape * const shape, int16_t x, int16_t y);
void Shape_Print (Shape * const shape);
