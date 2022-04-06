#include "liblist.c"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    //testing the funtion isEmpty
    example_list *list = NULL;
    isEmpty(list);

    //testing the functions head_include and tail_include
    list = head_include(list, 1);
    list = tail_include(list, 2);
    list = tail_include(list, 3);
    list = tail_include(list, 4);
    list = tail_include(list, 5);
    print_list(list);

    //testing the function before_include
    list = before_include(list, 6, 2);
    print_list(list);

    //testing the functions head_excldue and tail_excldue
    list = head_excldue(list);
    print_list(list);
    list = tail_excldue(list);
    print_list(list);

    //testing the function node_excldue
    list = node_excldue(list, 2);
    print_list(list);




    return 0;
}