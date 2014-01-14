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
		
	private:
		enum MathsOperations {
			ADD,
			SUBTRACT,
			MULTIPLY,
			DIVISION
		};
	
		int number;
		
		double addFirstDouble;
		double addSecondDouble;
		
		double subtractFirstDouble;
		double subtractSecondDouble;
		
		double multiplyFirstDouble;
		double multiplySecondDouble;
		
		double divisionFirstDouble;
		double divisionSecondDouble;
};

#endif /* defined(__Calculator__MainMenu__) */
