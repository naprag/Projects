#pragma once

// Header Files
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Macro Definitions
#define MIN_CHOICE 1
#define MAX_CHOICE 6
#define BUFFER_SIZE 32

// Linked List Declaration
typedef struct node {
    char *name;
    char *author;
    int price;
    struct node *next ;
} node;

// Functions
void prints_choices(void);
void free_list(node *ptr);

// input functions
char *takes_name();
char *takes_author();
int takes_price();

// linked list functions
void add_book(node **ptr);
void remove_book();
void view_list();
void update_book();
