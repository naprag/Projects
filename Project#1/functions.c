#include "functions.h"

void prints_choices(void)
{
    printf("\n1. View Reading List\n");
    printf("2. Add Book\n");
    printf("3. Remove a Book\n");
    printf("4. Search Book\n");
    printf("5. Update Book\n");
    printf("6. Exit\n\n");
}

char *takes_name() {}

char *takes_author() {}

int takes_price() {}

void free_list(node *ptr)
{
    // while (ptr is not NULL)
    // {
    // create a temporary node and set it to ptr->next;
    // free(ptr);
    // set ptr to the temporary node;
    // }
}

// linked list functions
void add_book(node **ptr)
{
    // temp node and error checking
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        fprintf(stderr, "malloc of node unsuccessful\a\n");
        exit(EXIT_FAILURE);
    }
    node *tmp = *ptr;

    // if linked list is empty
    if (*ptr == NULL)
    {
        *ptr = new_node;
    }
    else
    {
        // traverse the list till the end
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
    new_node->next = NULL;
}

void remove_book() {}

void view_list(node *ptr)
{
    if (ptr == NULL)
    {
        printf("\nList is empty\n");
    }
}

void update_book() {}
