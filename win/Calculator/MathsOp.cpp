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

    addPartOne();
    addPartTwo();

    _sum = _addDoubleOne + _addDoubleTwo;
    cout << "Sum: " << _sum << endl;

    endScreen();
}

void MathsOp::addPartOne() {
    cout << "Enter first number: ";
    cin >> _addDoubleOne;
    if (cin.fail()) {
        showErrorMessage();

        cin.clear();
        cin.ignore(10000, '\n');

        addPartOne();
    }
}

void MathsOp::addPartTwo() {
    cout << "Enter second number: ";
    cin >> _addDoubleTwo;
    if (cin.fail()) {
        showErrorMessage();

        cin.clear();
        cin.ignore(10000, '\n');

        addPartTwo();
    }
}

void MathsOp::subtract() {
    showTitleOfMathsOp("SUBTRACT");

    subtractPartOne();
    subtractPartTwo();

    _difference = _subtractDoubleOne - _subtractDoubleTwo;
    cout << "Difference: " << _difference << endl;

    endScreen();
}

void MathsOp::subtractPartOne() {
    cout << "Enter first number: ";
    cin >> _subtractDoubleOne;
    if (cin.fail()) {
        showErrorMessage();

        cin.clear();
        cin.ignore(10000, '\n');

        subtractPartOne();
    }
}

void MathsOp::subtractPartTwo() {
    cout << "Enter second number: ";
    cin >> _subtractDoubleTwo;
    if (cin.fail()) {
        showErrorMessage();

        cin.clear();
        cin.ignore(10000, '\n');

        subtractPartTwo();
    }
}

void MathsOp::multiply() {
    showTitleOfMathsOp("MULTIPLY");

    multiplyPartOne();
    multiplyPartTwo();

    _product = _multiplyDoubleOne * _multiplyDoubleTwo;
    cout << "Product: " << _product << endl;

    endScreen();
}

void MathsOp::multiplyPartOne() {
    cout << "Enter first number: ";
    cin >> _multiplyDoubleOne;
    if (cin.fail()) {
        showErrorMessage();

        cin.clear();
        cin.ignore(10000, '\n');

        multiplyPartOne();
    }
}

void MathsOp::multiplyPartTwo() {
    cout << "Enter second number: ";
    cin >> _multiplyDoubleTwo;
    if (cin.fail()) {
        showErrorMessage();

        cin.clear();
        cin.ignore(10000, '\n');

        multiplyPartTwo();
    }
}

void MathsOp::divide() {
    showTitleOfMathsOp("DIVIDE");

    dividePartOne();
    dividePartTwo();

    _division = _divideDoubleOne / _divideDoubleTwo;
    cout << "Division: " << _division << endl;

    endScreen();
}

void MathsOp::dividePartOne() {
    cout << "Enter first number: ";
    cin >> _divideDoubleOne;

    // checks for division by zero too
    if (cin.fail() || _divideDoubleOne == 0) {
        showErrorMessage();

        cin.clear();
        cin.ignore(10000, '\n');

        dividePartOne();
    }
}

void MathsOp::dividePartTwo() {
    cout << "Enter second number: ";
    cin >> _divideDoubleTwo;
    if (cin.fail()) {
        showErrorMessage();

        cin.clear();
        cin.ignore(10000, '\n');

        dividePartTwo();
    }
}

void MathsOp::endScreen() {
    cout << endl;
    cout << "What do you want to do?\n";

    cout << "1 - ADD\n";
    cout << "2 - SUBTRACT\n";
    cout << "3 - MULTIPLY\n";
    cout << "4 - DIVIDE\n";
    cout << "5 - EXIT\n";

    cout << "Your choice: ";
    cin >> _endScreenChoice;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');

        endScreen();
    }

    if (_endScreenChoice[0] == '1') {
        add();
    } else if (_endScreenChoice[0] == '2') {
        subtract();
    } else if (_endScreenChoice[0] == '3') {
        multiply();
    }else if (_endScreenChoice[0] == '4') {
        divide();
    } else if (_endScreenChoice[0] == '5') {
        cout << "Program ended..." << endl;
    } else {
        if (cin.fail()) {
            showErrorMessage();

            cin.clear();
            cin.ignore(10000, '\n');

            endScreen();
        }

        showErrorMessage();
        endScreen();
    }
}
