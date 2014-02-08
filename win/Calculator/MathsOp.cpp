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

    sum = addDoubleOne + addDoubleTwo;
    cout << "Sum: " << sum << endl;

    endScreen();
}

void MathsOp::subtract() {
    showTitleOfMathsOp("SUBTRACT");

    cout << "Enter first number: ";
    cin >> subtractDoubleOne;
    if (cin.fail()) {
        showErrorMessage();
        subtract();
    }

    cout << "Enter second number: ";
    cin >> subtractDoubleTwo;
    if (cin.fail()) {
        showErrorMessage();
        subtract();
    }

    difference = subtractDoubleOne - subtractDoubleTwo;
    cout << "Difference: " << difference << endl;

    endScreen();
}

void MathsOp::multiply() {
    showTitleOfMathsOp("MULTIPLY");

    cout << "Enter first number: ";
    cin >> multiplyDoubleOne;
    if (cin.fail()) {
        showErrorMessage();
        multiply();
    }

    cout << "Enter second number: ";
    cin >> multiplyDoubleTwo;
    if (cin.fail()) {
        showErrorMessage();
        multiply();
    }

    product = multiplyDoubleOne * multiplyDoubleTwo;
    cout << "Product: " << product << endl;

    endScreen();
}

void MathsOp::divide() {
    showTitleOfMathsOp("DIVIDE");

    cout << "Enter first number: ";
    cin >> divideDoubleOne;
    if (cin.fail()) {
        showErrorMessage();
        divide();
    }

    cout << "Enter second number: ";
    cin >> divideDoubleTwo;
    if (cin.fail()) {
        showErrorMessage();
        divide();
    }

    division = divideDoubleOne / divideDoubleTwo;
    cout << "Division: " << division << endl;

    endScreen();
}

void MathsOp::endScreen() {
    cout << "What do you want to do?" << endl;

    cout << "1 - ADD" << endl;
    cout << "2 - SUBTRACT" << endl;
    cout << "3 - MULTIPLY" << endl;
    cout << "4 - DIVIDE" << endl;
    cout << "5 - END" << endl;

    cout << "Your choice: ";
    cin >> endScreenChoice;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');

        endScreen();
    }

    if (endScreenChoice == ADD) {
        add();
    }

    if (endScreenChoice == SUBTRACT) {
        subtract();
    }

    if (endScreenChoice == MULTIPLY) {
        multiply();
    }

    if (endScreenChoice == DIVIDE) {
        divide();
    }

    if (endScreenChoice == END) {
        cout << "Program ended..." << endl;
    }
}
