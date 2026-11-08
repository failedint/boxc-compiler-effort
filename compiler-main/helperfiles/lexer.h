#ifndef LEXER_H
#define LEXER_H

#include <cwchar>
typedef enum {
    I32,
    VOID__,
    
    FUNCTION_MAIN,
    RETURN__,

    UNKNOWN
}sets;

typedef struct sets_tree{
    sets type;
    char* value;
    struct sets_tree *next;
}sets_tree;


#endif
