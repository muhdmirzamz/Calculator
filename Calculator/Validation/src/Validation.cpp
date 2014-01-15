//
//  Validation.cpp
//  Calculator
//	Validation part of the calculator
//
//  Created by Muhd Mirza on 14/1/14.
//  Copyright (c) 2014 Muhd Mirza. All rights reserved.
//

#include "Validation.h"
#include "MainMenu.h"

using namespace std;

Validation::Validation() {
}

void Validation::validationError() {
	cout << "Invalid input! Try again!" << endl;
	cout << "---------------" << endl;
	
	cin.clear();
	cin.ignore(10000, '\n');
	cout << endl;

	MainMenu mainMenuObject;
	mainMenuObject.showOptionsScreen();
}

