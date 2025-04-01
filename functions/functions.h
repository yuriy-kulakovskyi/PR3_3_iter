#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Структура для вузла двонаправленого списку
struct Node {
  int data;       // Інформаційне поле
  Node* prev;     // Вказівник на попередній вузол
  Node* next;     // Вказівник на наступний вузол
};

Node* createNode(int value);
void append(Node*& head, int value);
void printList(Node* head);
bool hasAdjacentEqual(Node* head);

#endif //FUNCTIONS_H
