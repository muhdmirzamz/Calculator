//
//  MainMenu.cpp
//  Calculator
//	Main Menu
//
//  Created by Muhd Mirza on 14/1/14.
//  Copyright (c) 2014 Muhd Mirza. All rights reserved.
//

#include "MainMenu.h"

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
	
	if (number == ADD) {
		add();
	} else if (number == SUBTRACT) {
		subtract();
	} else if (number == MULTIPLY) {
		multiply();
	} else if (number == DIVISION) {
		divide();
	} else if (number == EXIT) {
		cout << "Program quit!" << endl;
	} else {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
		}
	}
	
}

void MainMenu::add() {
	cout << "Testing" << endl;
	cout << "Enter first number: ";
	cin >> addFirstDouble;
	
	if (cin.fail()) {
		cout << "Invalid input! Try again!" << endl;
	
		cin.clear();
		cin.ignore(10000, '\n');
		add();
	}
	
	cout << "Enter second number: ";
	cin >> addSecondDouble;
	
	if (cin.fail()) {
		cout << "Invalid input! Try again!" << endl;
		
		cin.clear();
		cin.ignore(10000, '\n');
		add();
	}
	
	sum = addFirstDouble + addSecondDouble;
	cout << "Sum: " << sum << endl;
	
	cout << endl;
	addEndScreen();
}

void MainMenu::subtract() {
	cout << "Enter first number: ";
	cin >> subtractFirstDouble;
	
	if (cin.fail()) {
		cout << "Invalid input! Try again!" << endl;
		
		cin.clear();
		cin.ignore(10000, '\n');
		subtract();
	}
	
	cout << "Enter second number: ";
	cin >> subtractSecondDouble;
	
	if (cin.fail()) {
		cout << "Invalid input! Try again!" << endl;
		
		cin.clear();
		cin.ignore(10000, '\n');
		subtract();
	}
	
	difference = subtractFirstDouble - subtractSecondDouble;
	cout << "Difference: " << difference << endl;
	
	cout << endl;
	subtractEndScreen();
}

void MainMenu::multiply() {
	cout << "Enter first number: ";
	cin >> multiplyFirstDouble;
	
	if (cin.fail()) {
		cout << "Invalid input! Try again!" << endl;
		
		cin.clear();
		cin.ignore(10000, '\n');
		multiply();
	}
	
	cout << "Enter second number: ";
	cin >> multiplySecondDouble;
	
	if (cin.fail()) {
		cout << "Invalid input! Try again!" << endl;
		
		cin.clear();
		cin.ignore(10000, '\n');
		multiply();
	}
	
	product = multiplyFirstDouble * multiplySecondDouble;
	cout << "Product: " << product << endl;
	
	cout << endl;
	multiplyEndScreen();
}

void MainMenu::divide() {
	cout << "Enter first number: ";
	cin >> divideFirstDouble;
	
	if (cin.fail()) {
		cout << "Invalid input! Try again!" << endl;
		
		cin.clear();
		cin.ignore(10000, '\n');
		divide();
	}
	
	if (divideFirstDouble == 0) {
		cout << "Invalid input! Try again!" << endl;
		
		cin.clear();
		cin.ignore(10000, '\n');
		divide();
	}
	
	cout << "Enter second number: ";
	cin >> divideSecondDouble;
	
	if (cin.fail()) {
		cout << "Invalid input! Try again!" << endl;
		
		cin.clear();
		cin.ignore(10000, '\n');
		divide();
	}

	division = divideFirstDouble / divideSecondDouble;
	cout << "Division: " << division << endl;
	
	remainderFirstInt = (int) divideFirstDouble;
	remainderSecondInt = (int) divideSecondDouble;
	remainder = remainderFirstInt % remainderSecondInt;
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