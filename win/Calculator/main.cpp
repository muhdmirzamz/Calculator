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
    MainMenu *mainMenu = new MainMenu();
    mainMenu->showOptions();

    delete mainMenu;
    return 0;
}
