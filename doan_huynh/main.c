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


void AddNodeToList(linked_list_t* ll, int val) {
    node_t* node = malloc(sizeof(node_t));
    node->value = val;
    node->previous_node = ll->last_node;
    node->next_node = NULL;

    if (ll->last_node) ll->last_node->next_node = node;
    else ll->head = node;

    ll->last_node = node;
    ll->len++;
}


int GetLen(linked_list_t* ll) {
    return ll->len;
}


void main() {
    linked_list_t ll = { 0 };

    AddNodeToList(&ll, 10);
    AddNodeToList(&ll, 20);
    AddNodeToList(&ll, 30);

    printf("So luong node: %d\n", GetLen(&ll));

    return 0;
}
