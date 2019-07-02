//
// Created by 1 on 03.07.2019.
//

#include "gtest/gtest.h"
#include "Stack.h"
#include "Operations.h"
#include "PolishNotation.h"
#include "Resulter .h"

using namespace std;

TEST(PolishNotationTest, normal_test) {

PolishNotation polishNotation;

Resulter resulter;

ASSERT_EQ(resulter.get_result(polishNotation.get_notation("0/2"), 0);
ASSERT_EQ(resulter.get_result(polishNotation.get_notation("8-(3+4)*6+4-3*5"), -45);
ASSERT_EQ(resulter.get_result(polishNotation.get_notation("7+3+6*(4-3*5)-7"), -63);
ASSERT_EQ(resulter.get_result(polishNotation.get_notation("7-(3+2)"), 2);
ASSERT_EQ(resulter.get_result(polishNotation.get_notation("13-(10+4)*5"), -57);
ASSERT_EQ(resulter.get_result(polishNotation.get_notation("(2*(2*(2*(2*(2*(2-2))))))"), 0);
ASSERT_EQ(resulter.get_result(polishNotation.get_notation("2*2+2"), 6);
ASSERT_EQ(resulter.get_result(polishNotation.get_notation("2*(2+2)"), 8);
ASSERT_EQ(resulter.get_result(polishNotation.get_notation("(2+2)-3"), 1);
}
