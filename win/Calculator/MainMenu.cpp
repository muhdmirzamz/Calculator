//
//  MainMenu.cpp
//  Calculator
//
//  Created by Muhd Mirza on 5/2/14.
//  Copyright (c) 2014 Muhd Mirza. All Rights Reserved.
//

#include <iostream>
#include <string.h>

#include "MainMenu.h"

using namespace std;

MainMenu::MainMenu()
{
    cout << "Calculator\n";

    // intialises mathsOp pointer for use
    mathsOp = new MathsOp();
}

inline void MainMenu::showErrorMsg() {
    cout << "Invalid input! Try again!\n";
}

void MainMenu::showOptions() {
    cout << endl;

    // no need for enums here
    // can't use enums with int because
    // of inconvenient error handling
    cout << "1 - ADD\n";
    cout << "2 - SUBTRACT\n";
    cout << "3 - MULTIPLY\n";
    cout << "4 - DIVIDE\n";
    cout << "5 - EXIT\n";

    cout << "Choice: ";
    cin >> _choice;

    // takes the first element as input, ignores the rest
    if (_choice[0] == '1') {
        mathsOp->add();
    } else if (_choice[0] == '2') {
        mathsOp->subtract();
    } else if (_choice[0] == '3') {
        mathsOp->multiply();
    } else if (_choice[0] == '4') {
        mathsOp->divide();
    } else if (_choice[0] == '5') {
        cout << "Program exit...\n";
    } else {
        // only called or used if the input is double or something
        if (cin.fail()) {
            showErrorMsg();

            cin.clear();
            cin.ignore(10000, '\n');

            showOptions();
        }

        // used by default
        showErrorMsg();
        showOptions();
    }
}

// free resources
MainMenu::~MainMenu() {
    delete mathsOp;
}
