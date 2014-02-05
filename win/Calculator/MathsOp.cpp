//
//  MathsOp.cpp
//  Calculator
//
//  Created by Muhd Mirza on 5/2/14.
//  Copyright (c) 2014 Muhd Mirza. All Rights Reserved.
//


#include "MathsOp.h"

using namespace std;

MathsOp::MathsOp()
{
}

void MathsOp::add() {
    showTitleOfMathsOp("ADD");

    cout << "Enter first number: ";
    cin >> addDoubleOne;
    if (cin.fail()) {
        showErrorMessage();
        add();
    }

    cout << "Enter second number: ";
    cin >> addDoubleTwo;
    if (cin.fail()) {
        showErrorMessage();
        add();
    }


}

void MathsOp::subtract() {

}

void MathsOp::multiply() {

}

void MathsOp::divide() {

}
