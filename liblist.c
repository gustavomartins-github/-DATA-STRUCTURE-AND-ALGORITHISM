#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

int isEmpty(example_list *list)
{
    if (list == NULL)
    {
        printf("List is empty\n");
        return 1;
    }
    else
    {
        printf("List is not empty\n");
        return 0;
    }
}

example_list * head_include(example_list *list, int value)
{
    example_list *new_node = (example_list *)malloc(sizeof(example_list));
    new_node->number = value;
    new_node->next = list;
    list = new_node;
    return list;
}

example_list * tail_include(example_list *list, int value)
{
    example_list *new_node = (example_list *)malloc(sizeof(example_list));
    new_node->number = value;
    new_node->next = NULL;
    if (list == NULL)
    {
        list = new_node;
    }
    else
    {
        example_list *aux = list;
        while (aux->next != NULL)
        {
            aux = aux->next;
        }
        aux->next = new_node;
    }
    return list;
}

example_list * before_include(example_list *list, int value, int next_value)
{
    example_list *new_node = (example_list *)malloc(sizeof(example_list));
    new_node->number = value;
    new_node->next = NULL;
    if (list == NULL)
    {
        list = new_node;
    }
    else
    {
        example_list *aux = list;
        while (aux->next->number != next_value)
        {
            aux = aux->next;
        }
        new_node->next = aux->next;
        aux->next = new_node;
    }
    return list;
}

example_list * head_excldue(example_list *list)
{
    if (list == NULL)
    {
        printf("List is empty\n");
        return list;
    }
    else
    {
        example_list *aux = list;
        list = list->next;
        free(aux);
        return list;
    }
}

example_list * tail_excldue(example_list *list)
{
    if (list == NULL)
    {
        printf("List is empty\n");
        return list;
    }
    else
    {
        example_list *aux = list;
        while (aux->next->next != NULL)
        {
            aux = aux->next;
        }
        free(aux->next);
        aux->next = NULL;
        return list;
    }
}

// aux = node before the value && aux2 = node after the value
example_list * node_excldue(example_list *list, int value)
{
    if (list == NULL)
    {
        printf("List is empty\n");
        return list;
    }
    else
    {
        example_list *aux = list;
        if (list->number == value)
        {
            list = list->next;
            free(aux);
            return list;
        }
        else
        {
            while (aux->next->number != value)
            {
                aux = aux->next;
            }
            example_list *aux2 = aux->next->next;
            free(aux->next);
            aux->next = aux2;
            return list;
        }
    }
}

void print_list(example_list *list)
{
    if (list == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        example_list *aux = list;
        while (aux != NULL)
        {
            printf("%d ", aux->number);
            aux = aux->next;
        }
        printf("\n");
    }
}

example_list * list_excldue(example_list *list)
{
    if (list == NULL)
    {
        printf("List is empty\n");
        return list;
    }
    else
    {
        while (list != NULL)
        {
            list = head_excldue(list);
        }
        return list;
    }
}
