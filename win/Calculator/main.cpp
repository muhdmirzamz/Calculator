//
//  main.cpp
//  Calculator
//
//  Created by Muhd Mirza on 5/2/14.
//  Copyright (c) 2014 Muhd Mirza. All Rights Reserved.
//

#include <iostream>
#include "MainMenu.h"

using namespace std;

int main()
{
    // this outputs the title of the app
    // and initialises the MathsOp pointer declared privately
    // an example of multitasking for the programmer
    MainMenu *mainMenu = new MainMenu();
    mainMenu->showOptions();

    // free resources allocated dynamically
    delete mainMenu;
    return 0;
}
