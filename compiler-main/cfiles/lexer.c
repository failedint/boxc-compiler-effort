#include "../helperfiles/lexer.h"
#include "../helperfiles/logging.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

sets_tree* lex_main(const char* sourcefile){
    int iteration = 0;
    while(sourcefile[iteration] != '\0'){
        char cchar = sourcefile[iteration];  // note: cchar stands for current char
        if(cchar == ' '|| cchar == '\t' || cchar == '\n' || cchar == '\r'){
            iteration++;
            continue;
        }
        
        iteration++;
    }
}
