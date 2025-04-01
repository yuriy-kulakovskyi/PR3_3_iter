#include "functions.h"
#include <iostream>

// Функція для створення нового вузла
Node* createNode(int value) {
  Node* newNode = new Node();
  newNode->data = value;
  newNode->prev = nullptr;
  newNode->next = nullptr;
  return newNode;
}

// Функція для додавання елемента в кінець списку
void append(Node*& head, int value) {
  Node* newNode = createNode(value);
  if (head == nullptr) {
    head = newNode;
  }
  else {
    Node* temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
}

// Функція для виведення списку на екран
void printList(Node* head) {
  Node* temp = head;
  while (temp != nullptr) {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
  std::cout << std::endl;
}

// Функція для перевірки, чи є в списку пара сусідніх елементів з однаковими значеннями
bool hasAdjacentEqual(Node* head) {
  Node* temp = head;
  while (temp != nullptr && temp->next != nullptr) {
    if (temp->data == temp->next->data) {
      return true;  // Знайшли пару однакових елементів
    }
    temp = temp->next;
  }
  return false;  // Пару однакових елементів не знайдено
}