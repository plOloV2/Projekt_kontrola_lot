#include "libs.h"

uint8_t compare_str(char* A, char* B){

    for(uint8_t i = 0; i < 64; i++){

        if(A[i] != B[i])
            return 0;

        if(A[i] == '\0' || B[i] == '\0')
            break;
        
    }

    return 1;

}
