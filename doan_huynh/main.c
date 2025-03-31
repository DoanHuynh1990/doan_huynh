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

void RemoveIndex(linked_list_t* ll, int index) {
    if (index < 0 || index >= ll->len) return;

    node_t* temp = ll->head;

    if (index == 0) {
        ll->head = temp->next_node;
        if (ll->head)
            ll->head->previous_node = NULL;
        else
            ll->last_node = NULL;
    }
    else {
        for (int i = 0; i < index; i++) temp = temp->next_node;
        temp->previous_node->next_node = temp->next_node;
        if (temp->next_node)
            temp->next_node->previous_node = temp->previous_node;
        else
            ll->last_node = temp->previous_node;
    }

    free(temp);
    ll->len--;
}

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

int main() {
    linked_list_t ll = {0};

    InsertNodeAtIndex(&ll, 10, 0);
    InsertNodeAtIndex(&ll, 20, 1);
    InsertNodeAtIndex(&ll, 30, 2);
    InsertNodeAtIndex(&ll, 40, 3);
    InsertNodeAtIndex(&ll, 50, 4);

    RemoveIndex(&ll, 2); 
    RemoveIndex(&ll, 0); 
    RemoveIndex(&ll, ll.len - 1); 

    printf("So luong note con lai: %d\n", ll.len); 

    return 0;
}
