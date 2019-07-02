//
// Created by 1 on 01.07.2019.
//

#include <iostream>
#include "Stack.h"

using namespace std;

#define IS_EMPTY  "Stack is empty";

Stack::Stack(int number) {
    Max = 1000;
    index = 0;
    arr = new char[number];
    Max = number;
}

bool Stack::Push(char n) {
    arr[index] = n;// помещаем элемент в массив
    index++;
    return true;
}

char Stack::Pop() {//выталкивает элемент
    if (index <= 0) { throw IS_EMPTY; }
    else {
        return arr[--index];
    };
}

bool Stack::Is_empty() {
    return (index <= 0);
}

int Stack::count() {
    return index;
}

char Stack::Search() {
    return arr[index-1];
}
