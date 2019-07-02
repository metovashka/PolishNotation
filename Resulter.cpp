//
// Created by 1 on 03.07.2019.
//

#include "Resulter.h"

#include "Resulter.h"
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

int Resulter::get_result(string s) {
    Collection collection;
    collection.add();
    vector<char> simvols;
    vector<int> numbers;
    int a, c, i = 0;
    char *str;
    while ((s[i] != '\0') && (s[i] != ' ')) {
        simvols.push_back(s[i]);
        i++;
    }
    str = new char[1];
    str[1] = '\0';

    for (int i(0); i < simvols.size(); i++) {
        if (('0' <= simvols.at(i)) && (simvols.at(i) <= '9')) {
            str[0] = simvols.at(i);
            a = atoi(str);
            numbers.push_back(a);
        }
    }

    for (int i(0); ((i < simvols.size()) && (simvols.size() != 1)); i++) {
        if (collection.all_operations(simvols.at(i))) {
            c = collection.get_operation(simvols.at(i))->culculate(numbers.at(i - 2), numbers.at(i - 1));
            numbers.at(i - 2) = c;
            simvols.erase(simvols.begin() + i);
            simvols.erase(simvols.begin() + i - 1);
            numbers.erase(numbers.begin() + i - 1);
            i = i - 2;
        }
    }
    return numbers.at(0);
}
