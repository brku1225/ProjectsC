#include "linkedlist.h"

int add_block(char *data, struct my_linked_list *ll) {
    if (ll->head == NULL) {
        ll->head = malloc(sizeof(struct block));
        ll->tail = ll->head;
        ll->head->next = NULL;
        strncpy(ll->head->data, data, 20);
        return 1;
    }
    ll->tail->next = malloc(sizeof(struct block));
    ll->tail = ll->tail->next;
    ll->tail->next = NULL;
    strncpy(ll->tail->data, data, MAXDATASIZE);
    return 1;
}

int remove_block(char *data, struct my_linked_list *ll) {
    if (ll->head == NULL) { return 0; }
    struct block *curr = ll->head;
    struct block *prev;
    if (strcmp(curr->data, data) == 0) {
        ll->head = ll->head->next;
        free(curr);
        return 1;
    }
    while (curr != NULL && strcmp(curr->data, data) != 0) {
        prev = curr;
        curr = curr->next;
    }
    if (curr != NULL) {
        prev->next = curr->next;
        free(curr);
        return 1;
    }
    return 0;
}

char* search(char *data, struct my_linked_list ll) {
    if (ll.head == NULL) { return "empty list"; }
    struct block *curr = ll.head;
    while (curr != NULL && strcmp(curr->data, data) != 0) {
        curr = curr->next;
    }
    if (curr != NULL) {
        return curr->data;
    }
    else
    {
        return "not found";
    }
    
}

void print_my_list(struct my_linked_list ll) {
    if (ll.head == NULL) { printf("empty list\n"); return; }
    struct block *curr = ll.head;
    while (curr != NULL) {
        printf("%s\n", curr->data);
        curr = curr->next;
    }
}