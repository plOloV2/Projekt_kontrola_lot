#include "libs.h"
#include "plane.h"
#include <math.h>
#include <string.h>

void create_plane(plane* target, int32_t start_pos[3]){
    
    target->current_pos[0] = start_pos[0];
    target->current_pos[1] = start_pos[1];
    target->current_pos[2] = start_pos[2];

}

uint8_t can_collide(plane* A, plane* B){

    int32_t P[3], V[3];

    P[0] = A->current_pos[0] - B->current_pos[0];
    P[1] = A->current_pos[1] - B->current_pos[1];
    P[2] = A->current_pos[2] - B->current_pos[2];

    V[0] = A->velocity_vector[0] - B->velocity_vector[0];
    V[1] = A->velocity_vector[1] - B->velocity_vector[1];
    V[2] = A->velocity_vector[2] - B->velocity_vector[2];

    float a = V[0]*V[0] + V[1]*V[1] + V[2]*V[2];

    if(a == 0)
        return 0xff;

    float c = P[0]*P[0] + P[1]*P[1] +P[2]*P[2] - 4;

    if(c < 0)
        return 0x0;

    float b = 2 * (P[0]*V[0] + P[1]*V[1] + P[2]*V[2]);

    float delta = b*b - 4*a*c;

    if(delta < 0)
        return 0xff;

    float sqrt_delta = sqrtf(delta);

    float t1 = (-b - sqrt_delta) / (2*a);
    float t2 = (-b + sqrt_delta) / (2*a);

    if(t1 >= 0 && t1 < 255)
        return t1;
    
    if(t2 >= 0 && t2 < 255)
        return t2;

    return 0xff;

}

uint8_t land_plane(plane* target){

    memset(target, 0x00, sizeof(plane));

    return 0;

}
