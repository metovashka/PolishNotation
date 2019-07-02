//
// Created by 1 on 01.07.2019.
//

#ifndef POLISHNONATION_OPERATIONS_H
#define POLISHNONATION_OPERATIONS_H

#include <vector>

class Operation {
protected:
    char symbol;
    int priority;
public:
    Operation(char, int);

    int get_priority();

    char get_symbol();

    virtual int culculate(int, int) = 0;

};


class Plus : public Operation {
public:
    Plus(char s, int a) : Operation(s, a) {
    };

    int culculate(int, int) override;
};

class Minus : public Operation {
public:
    Minus(char s, int a) : Operation(s, a) {
    };

    int culculate(int, int) override;
};

class Multi : public Operation {
public:
    Multi(char s, int a) : Operation(s, a) {
    };

    int culculate(int, int) override;
};

class Div : public Operation {
public:
    Div(char s, int a) : Operation(s, a) {
    };

    int culculate(int, int) override;
};

class Collection {
private:
    std::vector<Operation *> Collection;

public:
    int add();//добавить операцию

    Operation *get_operation(char);

    bool all_operations(char);
};


#endif //POLISHNONATION_OPERATIONS_H
