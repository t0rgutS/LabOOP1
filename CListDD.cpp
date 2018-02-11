#include "CListDD.h"
#include <iostream>

// it is patch

ListDD::ListDD() {
    head = NULL;
    tail = NULL;
}

ListDD::~ListDD() {
    delList();
}

void ListDD::addItem(float f) {
    List *temp;
    temp = new List;
    temp->next = NULL;
    temp->val = f;
    if (head != NULL) {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    } else {
        temp->prev = NULL;
        tail = head = temp;
    }
}

void ListDD::display() {
    List *p;
    p = head;
    if (p != NULL) {
        printf("Ваш список: ");
        do {
            printf("%6.2f ", p->val);
            p = p->next;
        } while (p);
        printf("\n");
    } else
        printf("Ваш список пуст.\n");
}

void ListDD::reverseDisplay() {
    List *p;
    p = tail;
    if (p != NULL) {
        printf("Ваш список в обратном порядке: ");
        while (p != NULL) {
            printf("%6.2f ", p->val);
            p = p->prev;
        }
        printf("\n");
    } else
        printf("Ваш список пуст.\n");
}

void ListDD::delList() {
    if (head != NULL) {
        List *p;
        while (head) {
            p = head;
            head = head->next;
            delete p;
        }
        tail = NULL;
        printf("Очистка списка успешно завершена.\n");
    } else
        printf("Список пуст.\n");
}
