#include <iostream>
#include "./functions/functions.h"

int main() {
    Node* head = nullptr; // Початковий вказівник на голову списку

    // Додавання елементів до списку
    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 20);
    append(head, 40);
    append(head, 20);

    // Виведення списку на екран
    std::cout << "Список: ";
    printList(head);

    // Перевірка на наявність пари однакових сусідніх елементів
    if (hasAdjacentEqual(head)) {
        std::cout << "Список містить пару сусідніх елементів з однаковими значеннями!" << std::endl;
    } else {
        std::cout << "Список не містить пару сусідніх елементів з однаковими значеннями." << std::endl;
    }

    return 0;
}