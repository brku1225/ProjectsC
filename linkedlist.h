#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define MAXDATASIZE 20

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct my_linked_list {
    struct block *head;
    struct block *tail;
};

struct block {
    struct block *next;
    char data[MAXDATASIZE];
};

// Return bool for success or failure
int add_block(char *data, struct my_linked_list *ll);
int remove_block(char *data, struct my_linked_list *ll);

// Return string from block in ll
char* search(char *data, struct my_linked_list ll);

// Just print list, no return needed
void print_my_list(struct my_linked_list ll);

#endif