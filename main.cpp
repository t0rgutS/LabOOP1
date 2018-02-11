#include <iostream>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include "CListDD.h"

int main() {
    ListDD list;
    float el;
    char c;
    //setlocale(LC_ALL, "rus");
    system("chcp 65001");
    do {
        printf("Введите:\n\t'1' - для добавления эл-а в список;\n\t'2' - для вывода списка на экран;"
                       "\n\t'3' - для вывода списка в обратном порядке на экран;\n\t'4' - для удаления списка;"
                       "\n\t'5' - для выхода.\n");
        c = getchar();
        _flushall();
        c = tolower(c);
        switch (c) {
            case '1':
                printf("Введите эл-т списка: ");
                while (scanf("%f", &el) != 1) {
                    printf("Произошла ошибка. Пожалуйста, повторите ввод: ");
                    _flushall();
                }
                _flushall();
                list.addItem(el);
                break;;
            case '2':
                list.display();
                break;;
            case '3':
                list.reverseDisplay();
                break;;
            case '4':
                list.delList();
                break;;
            case '5':
                break;;
            default:
                printf("Произошла ошибка.\n");
                system("pause");
                break;;
        }
    } while (c != '5');
    return 0;
}