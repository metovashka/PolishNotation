//
// Created by 1 on 01.07.2019.
//

#include "Operations.h"
#include <vector>

Operation::Operation(char symb, int pri) {
    symbol = symb;
    priority = pri;
}

int Operation::get_priority() {
    return priority;
}

char Operation::get_symbol() {
    return symbol;
}

int Plus::culculate(int a, int b) {
    return a + b;
}

int Degree::culculate(int a, int b) {
    int c = 1;
    for (int i(0); i < b; i++) {
        c *=a;
    }
    return c;
}

int Minus::culculate(int a, int b) {
    return a - b;
}

int Multi::culculate(int a, int b) {
    return a * b;
}

int Div::culculate(int a, int b) {
    return a / b;
}

int Collection::add() {

    Collection.push_back(new Plus('+', 2));
    Collection.push_back(new Degree('^', 2));
    Collection.push_back(new Minus('-', 2));
    Collection.push_back(new Multi('*', 3));
    Collection.push_back(new Div('/', 3));
}


Operation *Collection::get_operation(char s) {
    if (Collection.empty()) return nullptr;
    for (int i = 0; i < Collection.size(); i++) {
        if (Collection.at(i)->get_symbol() == s) {
            return Collection.at(i);
        }
    }
    return nullptr;
}

bool Collection::all_operations(char s) {

    for (int i = 0; i < Collection.size(); i++) {
        if (Collection.at(i)->get_symbol() == s) {
            return true;
        }
    }
    return false;
}

