//
//  MainMenu.h
//  Calculator
//	Main Menu
//
//  Created by Muhd Mirza on 14/1/14.
//  Copyright (c) 2014 Muhd Mirza. All rights reserved.
//

#ifndef __Calculator__MainMenu__
#define __Calculator__MainMenu__

#include <iostream>

using namespace std;

class MainMenu {
	public:
		MainMenu();
		
		void showOptionsScreen();
		
		void add();
		void subtract();
		void multiply();
		void divide();
		
		void addEndScreen();
		void subtractEndScreen();
		void multiplyEndScreen();
		void divideEndScreen();
		
	private:
		enum MathOperations {
			DEFAULT,
			ADD,
			SUBTRACT,
			MULTIPLY,
			DIVISION,
			EXIT
		};
	
		int number;
		
		int sum;
		double addFirstDouble;
		double addSecondDouble;
		
		int difference;
		double subtractFirstDouble;
		double subtractSecondDouble;
		
		int product;
		double multiplyFirstDouble;
		double multiplySecondDouble;
		
		double division;
		double divideFirstDouble;
		double divideSecondDouble;
		int remainder;
		int remainderFirstInt;
		int remainderSecondInt;
};

#endif /* defined(__Calculator__MainMenu__) */
