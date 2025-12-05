#ifndef PLANES_H
#define PLANES_H

#include "libs.h"
#include <omp.h>

typedef struct{
    int32_t current_pos[3];
    int32_t velocity_vector[3];
    int32_t landing_place[3]
}plane;

#endif
