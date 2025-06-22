//
//  stack_linked_list.h
//  DSA
//
//  Created by Nguyễn Tiến Toàn  on 10/5/25.
//

#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* top;

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void push(int value) {
    Node* node = createNode(value);
    if (top == NULL) { 
        top = node;
        return;
    }
    
    node->next = top;
    top = node;
}

void pop() {
    if (top == NULL) {
        return;
    }
    Node* temp = top;
    top = top->next;
    delete(temp);
}

void print(Node* node) {
    if (node == NULL) return;
    std::cout << node->data << std::endl;
    print(node->next);
}

int main(int argc, const char * argv[]) {
    push(3);
    push(4);
    push(2);
    pop();
    print(top);
    return 0;
}
