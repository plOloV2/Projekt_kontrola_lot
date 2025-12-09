#ifndef PLANE_OPERATIONS_H
#define PLANE_OPERATIONS_H

#include "libs.h"
#include "plane.h"

uint8_t create_plane(plane* target, int32_t start_pos[3]);

uint8_t can_collide(plane* A, plane* B);

uint8_t land_plane(plane* target);

#endif
