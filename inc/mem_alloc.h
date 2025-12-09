#ifndef MEM_ALLOC_H
#define MEM_ALLOC_H

#include "libs.h"
#include "plane.h"

plane* alloc_mem_planes(uint32_t num_planes){

    return (plane*) calloc(num_planes, sizeof(plane));

}

#endif
