#include "../helperfiles/lexer.h"
#include "../helperfiles/logging.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

sets determine_set(const char* token_str) {
    if (strcmp(token_str, "i32") == 0)    return I32;
    if (strcmp(token_str, "void") == 0)   return VOID__;
    if (strcmp(token_str, "main") == 0)   return FUNCTION_MAIN;
    if (strcmp(token_str, "return") == 0) return RETURN__;
    return UNKNOWN;
}
sets_tree* create_set_node(sets type, const char* value) {
    sets_tree* nnode = (sets_tree*)malloc(sizeof(sets_tree));
    if (!nnode) return NULL; //note: nnode stands for new node
    nnode->type = type;
    nnode->value = strdup(value);
    nnode->next = NULL;
    return nnode;
}

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
