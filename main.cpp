#include <iostream>
#include <string.h>
#include "PolishNotation.h"
#include "Resulter.h"

using namespace std;

int main() {
    string input = "7+3+6*(4-3*5)-7";

    PolishNotation polishNotation;

    Resulter resulter;

    cout<<"Исходная строка:"<<input<<endl;

    cout<<"Обратная польская запись:"<<polishNotation.get_notation(input)<<endl;

    cout<<"Ответ:"<<resulter.get_result(polishNotation.get_notation(input));


    return 0;
}