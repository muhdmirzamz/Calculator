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

// inline-declared function for program performance
inline void MainMenu::showErrorMsg() {
	cout << "Invalid input! Try again!\n";
}

void MainMenu::showOptionsScreen() {
	cout << "Calculator\n";
	cout << endl;

	// no need for enums
	// difficult for error handling with int
	cout << "1 - ADD" << endl;
	cout << "2 - SUBTRACT" << endl;
	cout << "3 - MULTIPLY" << endl;
	cout << "4 - DIVISION" << endl;
	cout << "5 - EXIT" << endl;
	
	cout << "Choose a number: ";
	
	cin >> _number;
	
	// only take first element as input
	// ignores the rest
	if (_number[0] == '1') {
		add();
	} else if (_number[0] == '2') {
		subtract();
	} else if (_number[0] == '3') {
		multiply();
	} else if (_number[0] == '4') {
		divide();
	} else if (_number[0] == '5') {
		cout << "Program quit!" << endl;
	} else {
		// only called when a different type is taken as input
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
		}
	
		// used by default
		showErrorMsg();
		showOptionsScreen();
	}
}

void MainMenu::add() {
	cout << "ADD\n";
	
	addPartOne();
	addPartTwo();
	
	_sum = _addFirstDouble + _addSecondDouble;
	cout << "Sum: " << _sum << endl;
	
	cout << endl;
	endScreen();
}

void MainMenu::addPartOne() {
	cout << "Enter first number: ";
	cin >> _addFirstDouble;
	
	if (cin.fail()) {
		showErrorMsg();
		
		cin.clear();
		cin.ignore(10000, '\n');
		
		addPartOne();
	}
}

void MainMenu::addPartTwo() {
	cout << "Enter second number: ";
	cin >> _addSecondDouble;
	
	if (cin.fail()) {
		showErrorMsg();
		
		cin.clear();
		cin.ignore(10000, '\n');
		
		addPartTwo();
	}
}

void MainMenu::subtract() {
	cout << "SUBTRACT\n";
	
	subtractPartOne();
	subtractPartTwo();
	
	_difference = _subtractFirstDouble - _subtractSecondDouble;
	cout << "Difference: " << _difference << endl;
	
	cout << endl;
	endScreen();
}

void MainMenu::subtractPartOne() {
	cout << "Enter first number: ";
	cin >> _subtractFirstDouble;
	
	if (cin.fail()) {
		showErrorMsg();
		
		cin.clear();
		cin.ignore(10000, '\n');
		
		subtractPartOne();
	}
}

void MainMenu::subtractPartTwo() {
	cout << "Enter second number: ";
	cin >> _subtractSecondDouble;
	
	if (cin.fail()) {
		showErrorMsg();
		
		cin.clear();
		cin.ignore(10000, '\n');
		
		subtractPartTwo();
	}
}

void MainMenu::multiply() {
	cout << "MULTIPLY\n";
	
	multiplyPartOne();
	multiplyPartTwo();
	
	_product = _multiplyFirstDouble * _multiplySecondDouble;
	cout << "Product: " << _product << endl;
	
	cout << endl;
	endScreen();
}

void MainMenu::multiplyPartOne() {
	cout << "Enter first number: ";
	cin >> _multiplyFirstDouble;
	
	if (cin.fail()) {
		showErrorMsg();
		
		cin.clear();
		cin.ignore(10000, '\n');
		
		multiplyPartOne();
	}
}

void MainMenu::multiplyPartTwo() {
	cout << "Enter second number: ";
	cin >> _multiplySecondDouble;
	
	if (cin.fail()) {
		showErrorMsg();
		
		cin.clear();
		cin.ignore(10000, '\n');
		
		multiplyPartTwo();
	}
}

void MainMenu::divide() {
	cout << "DIVIDE\n";
	
	dividePartOne();
	dividePartTwo();

	_division = _divideFirstDouble / _divideSecondDouble;
	cout << "Division: " << _division << endl;
	
	// type cast for remainder
	_remainderFirstInt = (int) _divideFirstDouble;
	_remainderSecondInt = (int) _divideSecondDouble;
	_remainder = _remainderFirstInt % _remainderSecondInt;
	cout << "Remainder: " << _remainder << endl;
	
	cout << endl;
	endScreen();
}

void MainMenu::dividePartOne() {
	cout << "Enter first number: ";
	cin >> _divideFirstDouble;
	
	// checks for division by zero
	if (cin.fail() || _divideFirstDouble == 0) {
		showErrorMsg();
		
		cin.clear();
		cin.ignore(10000, '\n');
		
		dividePartOne();
	}
}

void MainMenu::dividePartTwo() {
	cout << "Enter second number: ";
	cin >> _divideSecondDouble;
	
	if (cin.fail()) {
		showErrorMsg();
		
		cin.clear();
		cin.ignore(10000, '\n');
		
		dividePartTwo();
	}
}

void MainMenu::endScreen() {
	cout << "You can: " << endl;
	
	cout << "1 - ADD" << endl;
	cout << "2 - SUBTRACT" << endl;
	cout << "3 - MULTIPLY" << endl;
	cout << "4 - DIVISION" << endl;
	cout << "5 - EXIT" << endl;
	
	cout << "Your choice: ";
	cin >> _choice;
	
	if (_choice[0] == '1') {
		add();
	} else if (_choice[0] == '2') {
		subtract();
	} else if (_choice[0] == '3') {
		multiply();
	} else if (_choice[0] == '4') {
		divide();
	} else if (_choice[0] == '5') {
		cout << "Program quit" << endl;
	} else {
		// only called when a different type is taken as input
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
		}
		
		// used by default
		showErrorMsg();
		cout << endl;
		endScreen();
	}
}