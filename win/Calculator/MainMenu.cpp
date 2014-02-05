//
//  MainMenu.cpp
//  Calculator
//
//  Created by Muhd Mirza on 5/2/14.
//  Copyright (c) 2014 Muhd Mirza. All Rights Reserved.
//

#include <iostream>

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

    switch (choice) {
        case ADD:
            mathsOp->add();
            break;
        case SUBTRACT:
            mathsOp->subtract();
            break;
        case MULTIPLY:
            mathsOp->multiply();
            break;
        case DIVIDE:
            mathsOp->divide();
            break;
        default:
            showOptions();
    }
}

MainMenu::~MainMenu() {
    delete mathsOp;
}
