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
    cout << "Calculator for Windows" << endl;
    mathsOp = new MathsOp();
}

void MainMenu::showOptions() {
    cout << endl;

    cout << "1 - ADD" << endl;
    cout << "2 - SUBTRACT" << endl;
    cout << "3 - MULTIPLY" << endl;
    cout << "4 - DIVIDE" << endl;

    cout << "Choice: ";
    cin >> choice;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');

        showOptions();
    }


    if (choice == ADD) {
        mathsOp->add();
    }

    if (choice == SUBTRACT) {
        mathsOp->subtract();
    }

    if (choice == MULTIPLY) {
        mathsOp->multiply();
    }

    if (choice == DIVIDE) {
        mathsOp->divide();
    }
}

MainMenu::~MainMenu() {
    delete mathsOp;
}
