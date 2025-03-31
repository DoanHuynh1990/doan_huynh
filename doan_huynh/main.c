#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* previous_node;
    struct Node* next_node;
} node_t;

typedef struct {
    node_t* last_node;
    node_t* head;
    int len;
} linked_list_t;

void InsertNodeAtIndex(linked_list_t* ll, int val, int index) {
    if (index < 0 || index > ll->len) return;

    node_t* node = malloc(sizeof(node_t));
    node->value = val;

    if (index == 0) {
        node->next_node = ll->head;
        node->previous_node = NULL;
        if (ll->head) ll->head->previous_node = node;
        ll->head = node;
        if (ll->len == 0) ll->last_node = node;
    }
    else {
        node_t* temp = ll->head;
        for (int i = 0; i < index - 1; i++) temp = temp->next_node;
        node->next_node = temp->next_node;
        node->previous_node = temp;
        if (temp->next_node) temp->next_node->previous_node = node;
        else ll->last_node = node;
        temp->next_node = node;
    }

    ll->len++;
}

int Search(linked_list_t* ll, int value) {
    node_t* temp = ll->head;
    int index = 0;

    while (temp) {
        if (temp->value == value) return index;
        temp = temp->next_node;
        index++;
    }

    return -1;
}

int GetValue(linked_list_t* ll) {
    return ll->last_node ? ll->last_node->value : -1;
}

int main() {
    linked_list_t ll = {0};

    InsertNodeAtIndex(&ll, 10, 0);
    InsertNodeAtIndex(&ll, 45, 1);
    InsertNodeAtIndex(&ll, 67, 2);
    InsertNodeAtIndex(&ll, 75, 3);
    InsertNodeAtIndex(&ll, 80, 4);

    printf("Gia tri node cuoi cung: %d\n", GetValue(&ll)); 

    return 0;
}
