#include "linkedlist.h"

int main()
{
    struct my_linked_list my_ll;
    char *word1 = "one";
    char *word2 = "two";
    char *word3 = "three";
    char *word4 = "four";
    char *word5 = "five";
    char *word6 = "six";

    printf("Adding blocks...\n");
    printf("%i\n", add_block(word1, &my_ll));
    printf("%i\n", add_block(word2, &my_ll));
    printf("%i\n", add_block(word3, &my_ll));
    printf("%i\n", add_block(word4, &my_ll));
    printf("%i\n", add_block(word5, &my_ll));
    printf("%i\n", add_block(word6, &my_ll));
    
    printf("Searching...\n");
    printf("%s\n", search(word3, my_ll));
    printf("%s\n", search(word4, my_ll));

    printf("Removing blocks...\n");
    printf("%i\n", remove_block(word3, &my_ll));
    printf("%i\n", remove_block(word6, &my_ll));
    printf("%i\n", remove_block(word1, &my_ll));

    print_my_list(my_ll);

    return 0;
}