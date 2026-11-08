#include <stdio.h>
#include <time.h>
#include "../helperfiles/logging.h"
int main(int argc, char* argv[]){
    if(argc < 2){
        log_error("Missing a valid argument: error code -01\n");
        printf("Error: Missing a valid argument\n");
        return -01;
    } else{
    FILE* file = fopen(argv[1], "r");
    if(file == NULL){
       log_error("File does not exist: error code -02\n");
       return -02;
    }
    //do later
    fclose(file);
}
}
