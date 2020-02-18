#include "stdio.h"
#include "malloc.h"
#include "stdlib.h"

struct list_element {
        int value;
        struct list_element *next;
};

struct list_element *initialize(int value) {
        struct list_element *lst;
        lst = (struct list_element *)malloc(sizeof(struct list_element));
        lst->next = NULL;
        lst->value = value;
        return lst;
}

void add_element(struct list_element *lst, int value) {
        struct list_element *elem;
        elem = (struct list_element *)malloc(sizeof(struct list_element));
        elem->next = NULL;
        elem->value = value;
        struct list_element *cpy = lst;
        while (cpy->next != NULL) {
                cpy = cpy->next;                
        }
        cpy->next = elem;
        return;
}

void print_list(struct list_element *lst) {
        int i = 0;
        printf("Element number %i has value %i\n", i, lst->value);
        i++;
        struct list_element *cpy = lst;
        while (cpy->next != NULL) {
                cpy = cpy->next;
                printf("Element number %i has value %i\n", i, cpy->value);
                i++;
        }
        return;
}

int main() {
        struct list_element *test = initialize(0);
        add_element(test, 1);
        add_element(test, 2);
        print_list(test);
        return 0;
}
