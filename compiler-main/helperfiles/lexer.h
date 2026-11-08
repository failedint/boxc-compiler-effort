#ifndef LEXER_H
#define LEXER_H
#include <string.h>
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

sets determine_set(const char* token_str);
sets_tree* create_set_node(sets type, const char* value);
sets_tree* lex_main(const char* sourcefile);

#endif
