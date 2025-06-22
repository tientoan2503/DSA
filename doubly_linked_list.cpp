//
//  doubly_linked_list.cpp
//  DSA
//
//  Created by Nguyễn Tiến Toàn  on 10/5/25.
//

#include <iostream>

struct DoublyNode {
   int data;
   DoublyNode* prev;
   DoublyNode* next;
};

DoublyNode* head;

DoublyNode* createNode(int data) {
   DoublyNode* newNode = new DoublyNode();
   newNode->data = data;
   newNode->prev = NULL;
   newNode->next = NULL;
   return newNode;
}

void insertAtHead(DoublyNode* node) {
   if (head == NULL) {
       head = node;
       return;
   }
   
   node->next = head;
   head->prev = node;
   head = node;
}

void insertAtTail(DoublyNode* node) {
   if (head == NULL) {
       head = node;
       return;
   };
   DoublyNode* current = head;
   while (current->next != NULL) {
       current = current->next;
   }
   current->next = node;
   node->prev = current;
   node->next = NULL;
}

void print(DoublyNode* node) {
   if (node == NULL) {
       return;
   }
   std::cout << node->data << std::endl;
   print(node->next);
}

int main() {
   insertAtTail(createNode(1));
   insertAtTail(createNode(2));
   insertAtTail(createNode(3));
   print(head);
   return 0;
}
