//
//  main.cpp
//  Calculator
//	Program starts here
//
//  Created by Muhd Mirza on 13/1/14.
//  Copyright (c) 2014 Muhd Mirza. All rights reserved.
//

#include <iostream>

#include "MainMenu.h"

using namespace std;

int main(int argc, const char * argv[])
{
	MainMenu *mainMenu = new MainMenu();
	mainMenu->showOptionsScreen();
	
	// free resources
	delete mainMenu;
    return 0;
}

