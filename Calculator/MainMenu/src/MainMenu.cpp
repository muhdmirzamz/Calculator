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
	cout << "5 - EXIT" << endl;
	
	cout << "Choose a number: ";
	
	cin >> number;
	
	Validation validationObject;
	
	if (number == ADD) {
		add();
	} else if (number == SUBTRACT) {
		subtract();
	} else if (number == MULTIPLY) {
		multiply();
	} else if (number == DIVISION) {
		divide();
	} else {
		if (cin.fail()) {
			validationObject.validationError();
		}
	}
	
}

void MainMenu::add() {
	cout << "Enter first number: ";
	cin >> addFirstDouble;
	cout << "Enter second number: ";
	cin >> addSecondDouble;
	
	sum = addFirstDouble + addSecondDouble;
	cout << "Sum: " << sum << endl;
	
	cout << endl;
	addEndScreen();
}

void MainMenu::subtract() {
	cout << "Enter first number: ";
	cin >> subtractFirstDouble;
	cout << "Enter second number: ";
	cin >> subtractSecondDouble;
	
	difference = subtractFirstDouble - subtractSecondDouble;
	cout << "Difference: " << difference << endl;
	
	cout << endl;
	subtractEndScreen();
}

void MainMenu::multiply() {
	cout << "Enter first number: ";
	cin >> multiplyFirstDouble;
	cout << "Enter second number: ";
	cin >> multiplySecondDouble;
	
	product = multiplyFirstDouble * multiplySecondDouble;
	cout << "Product: " << product << endl;
	
	cout << endl;
	multiplyEndScreen();
}

void MainMenu::divide() {
	cout << "Enter first number: ";
	cin >> divideFirstDouble;
	cout << "Enter second number: ";
	cin >> divideSecondDouble;
	
	firstRemainder = (int)divideFirstDouble;
	secondRemainder = (int)divideSecondDouble;
	
	division = divideFirstDouble / divideSecondDouble;
	remainder = firstRemainder % firstRemainder;
	cout << "Division: " << division << endl;
	cout << "Remainder: " << remainder << endl;
	
	cout << endl;
	divideEndScreen();
}

void MainMenu::addEndScreen() {
	cout << "You can: " << endl;
	
	cout << "1 - TRY AGAIN" << endl;
	cout << "2 - SUBTRACT" << endl;
	cout << "3 - MULTIPLY" << endl;
	cout << "4 - DIVISION" << endl;
	cout << "5 - EXIT" << endl;
	
	int choice;
	cout << "Your choice: ";
	cin >> choice;
	
	if (choice == ADD) {
		add();
	} else if (choice == SUBTRACT) {
		subtract();
	} else if (choice == MULTIPLY) {
		multiply();
	} else if (choice == DIVISION) {
		divide();
	} else if (choice == EXIT) {
		cout << "Program quit" << endl;
	} else {
		addEndScreen();
	}
}

void MainMenu::subtractEndScreen() {
	cout << "You can: " << endl;
	
	cout << "1 - ADD" << endl;
	cout << "2 - TRY AGAIN" << endl;
	cout << "3 - MULTIPLY" << endl;
	cout << "4 - DIVISION" << endl;
	cout << "5 - EXIT" << endl;
	
	int choice;
	cout << "Your choice: ";
	cin >> choice;
	
	if (choice == ADD) {
		add();
	} else if (choice == SUBTRACT) {
		subtract();
	} else if (choice == MULTIPLY) {
		multiply();
	} else if (choice == DIVISION) {
		divide();
	} else if (choice == EXIT) {
		cout << "Program quit" << endl;
	} else {
		subtractEndScreen();
	}
}

void MainMenu::multiplyEndScreen() {
	cout << "You can: " << endl;
	
	cout << "1 - ADD" << endl;
	cout << "2 - SUBTRACT" << endl;
	cout << "3 - TRY AGAIN" << endl;
	cout << "4 - DIVISION" << endl;
	cout << "5 - EXIT" << endl;
	
	int choice;
	cout << "Your choice: ";
	cin >> choice;
	
	if (choice == ADD) {
		add();
	} else if (choice == SUBTRACT) {
		subtract();
	} else if (choice == MULTIPLY) {
		multiply();
	} else if (choice == DIVISION) {
		divide();
	} else if (choice == EXIT) {
		cout << "Program quit" << endl;
	} else {
		multiplyEndScreen();
	}
}

void MainMenu::divideEndScreen() {
	cout << "You can: " << endl;
	
	cout << "1 - ADD" << endl;
	cout << "2 - SUBTRACT" << endl;
	cout << "3 - MULTIPLY" << endl;
	cout << "4 - TRY AGAIN" << endl;
	cout << "5 - EXIT" << endl;
	
	int choice;
	cout << "Your choice: ";
	cin >> choice;
	
	if (choice == ADD) {
		add();
	} else if (choice == SUBTRACT) {
		subtract();
	} else if (choice == MULTIPLY) {
		multiply();
	} else if (choice == DIVISION) {
		divide();
	} else if (choice == EXIT) {
		cout << "Program quit" << endl;
	} else {
		divideEndScreen();
	}
}