#include "libs.h"

uint8_t compare_str(char* A, char* B);

int main(int argc, char** argv){

    switch(argc){
        case 2:
            if(compare_str(argv[1], "-h\0") || compare_str(argv[1], "--help\0")){
                fprintf(stdout, "This emulation requires 3 numeric arguments.\n1. Number of flight controll towers\n2. Minimal number of planes\n3. Maximum number of planes\n");
                return 0;
            }
               
        default:
            fprintf(stderr, "ERROR: Not valid arguments. For more info run: %s --help\n", argv[0]);
            return 1;

        case 3:
            
    }

    return 0;

}
