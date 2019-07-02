#ifndef POLISHNONATION_STACK_H
#define POLISHNONATION_STACK_H

class Stack {
private:
    char *arr;
    int Max;//максимальное значение стека
    int index,counter;//текущий элемент в стеке
public:
    Stack(int);

    bool Push(char);

    bool Is_empty() ;

    char Pop();

    int count();

    char Search();
};

#endif //POLISHNONATION_STACK_H
