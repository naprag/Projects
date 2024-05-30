#include "functions.h"

int main(void)
{
    printf("Welcome to my Reading List!\n");

    while (true)
    {
        prints_choices();

        // prompts for choice
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice < MIN_CHOICE || choice > MAX_CHOICE)
        {
            fprintf(stderr, "Invalid Choice\n");
        }

        node *ptr = NULL;
        if (choice == 1)
        {
            view_list(ptr);
        }

        if (choice == 2)
        {
            add_book(&ptr);
            takes_input(ptr);
        }

        if (choice == 6)
        {
            break;
        }
    }
    printf("\nThank you for using the Reading List!\n");

    // free_list();
    exit(EXIT_SUCCESS);
}
