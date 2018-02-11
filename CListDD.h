#ifndef CLASS
#define CLASS

// it is patch

class ListDD {
    struct List {
        float val;
        List *prev, *next;
    };
    List *head, *tail;
public:
    ListDD();                   //Конструктор.
    ~ListDD();                  //Деструктор.
    void addItem(float);        //Добавить новый элемент.
    void display();             //Вывести список.
    void reverseDisplay();      //Вывести список в обратном порядке.
    void delList();             //Очистить список.
};

#endif
