//
//  MainMenu.cpp
//  Calculator
//	Main Menu
//
//  Created by Muhd Mirza on 14/1/14.
//  Copyright (c) 2014 Muhd Mirza. All rights reserved.
//

#include "MainMenu.h"
#include "Validation.h"

using namespace std;

MainMenu::MainMenu() {
}

void MainMenu::showOptionsScreen() {
	cout << "Calculator" << endl;
	
	cout << endl;
	cout << endl;

	cout << "1 - ADD" << endl;
	cout << "2 - SUBTRACT" << endl;
	cout << "3 - MULTIPLY" << endl;
	cout << "4 - DIVISION" << endl;
	
	cout << "Choose a number: ";
	
	cin >> number;
	
	Validation validationObject;
	switch (number) {
		case ADD:
			add();
			break;
			
		case SUBTRACT:
			subtract();
			break;
			
		case MULTIPLY:
			multiply();
			break;
		
		case DIVISION:
			divide();
			break;
			
		default:
			validationObject.validationError();
			break;
	}
}

void MainMenu::add() {
	
}

void MainMenu::subtract() {
	
}

void MainMenu::multiply() {
	
}

void MainMenu::divide() {
	
}