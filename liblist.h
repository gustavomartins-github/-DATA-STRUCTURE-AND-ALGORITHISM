#ifndef _LIBLIST_H_
#define _LIBLIST_H_

// example of a struct
typedef struct TNode
{
    int number;
    struct TNode *next;
} example_list;

// Verify if the list is empty
int isEmpty(example_list *list);

// Add a new node to the list (at the start)
example_list * head_include(example_list *list, int value);

// Add a new node to the list (at the end)
example_list * tail_include(example_list *list, int value);

// Add a new node to the list (before the "next_value")
example_list * before_include(example_list *list, int value, int next_value);

// Remove a head node from the list
example_list * head_excldue(example_list *list);

// Remove a tail node from the list
example_list * tail_excldue(example_list *list);

// Remove a node from the list
example_list * node_excldue(example_list *list, int value);

// Print the list
void print_list(example_list *list);









#endif