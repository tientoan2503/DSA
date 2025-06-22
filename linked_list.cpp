//
//  main.cpp
//  DSA
//
//  Created by Nguyễn Tiến Toàn  on 10/5/25.
//

#include <iostream>

struct Node {
   int data;
   Node* next;
};

Node* head = NULL;

void insert(int data) {
   // create new Node with given data
   Node* newNode = new Node();
   newNode->data = data;
   
   if (head == NULL) {
       head = newNode;
       return;
   }
   
   // get the last Node
   Node* current = head;
   while (current->next != NULL) {
       current = current->next;
   }
   current->next = newNode;
}

void printRecursion(Node* node) {
   if (node == NULL) return;
   std::cout << node->data << std::endl;
   printRecursion(node->next);
}

void printReverseRecursion(Node* node) {
   if (node == NULL) return;
   printReverseRecursion(node->next);
   std::cout << node->data << std:: endl;
}

void reverseRecursion(Node* node) {
   if (node->next == NULL) {
       head = node;
       return;
   }
   reverseRecursion(node->next);
   Node* temp = node->next;
   temp->next = node;
   node->next = NULL;
}

int main(int argc, const char * argv[]) {
   insert(1);
   insert(2);
   insert(3);
   insert(5);
   reverseRecursion(head);
   printRecursion(head);
//    printReverseRecursion(head);
   return 0;
}
