//
// Created by 1 on 01.07.2019.
//

#include "PolishNotation.h"
#include <iostream>

using namespace std;

string PolishNotation::get_notation(string s) {
    string output(s.length(), ' ');
    int j = 0;
    Stack stack(s.length());
    Collection collection;
    collection.add();

    for (int i(0); i < s.length(); i++) {

        if ('0' <= s[i] && s[i] <= '9') {
            output[j] = s[i];
            j++;
        } else {
            if (s[i] == '(') {
                stack.Push(s[i]);
            }

            if (s[i] == ')') {
                while (stack.Search() != '(') {
                    output[j] = stack.Pop();
                    j++;
                }
                stack.Pop();
            }

            if ((s[i] != '(') && (s[i] != ')')) {
                while ((!stack.Is_empty()) && (stack.Search() != '(') &&
                       (((collection.get_operation(stack.Search()))->get_priority()) >=
                        ((collection.get_operation(s[i]))->get_priority()))) {
                    output[j] = stack.Pop();
                    j++;
                }
                stack.Push(s[i]);

            }
        }
    }

    while (!stack.Is_empty()) {
        output[j] = stack.Pop();
        j++;
    }

    return output;
}
