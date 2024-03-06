#include <iostream>

typedef struct Member {
    int data;
    struct Member *next;
} m;

m* head = nullptr;

void insert(int new_data) {
    m* new_node = (m*) malloc(sizeof(m));
    new_node->data =  new_data;
    new_node->next =  head;
    head = new_node;
}

void display() {
    
}
