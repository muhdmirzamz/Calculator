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
		
		inline void showErrorMsg();
		
		void showOptionsScreen();
		
		void add();
		void addPartOne();
		void addPartTwo();
		
		void subtract();
		void subtractPartOne();
		void subtractPartTwo();
		
		void multiply();
		void multiplyPartOne();
		void multiplyPartTwo();
		
		void divide();
		void dividePartOne();
		void dividePartTwo();
		
		void endScreen();
		
	private:
		char _number[10];
		char _choice[10];
		
		int _sum;
		double _addFirstDouble;
		double _addSecondDouble;
		
		int _difference;
		double _subtractFirstDouble;
		double _subtractSecondDouble;
		
		int _product;
		double _multiplyFirstDouble;
		double _multiplySecondDouble;
		
		double _division;
		double _divideFirstDouble;
		double _divideSecondDouble;
		int _remainder;
		int _remainderFirstInt;
		int _remainderSecondInt;
};

#endif /* defined(__Calculator__MainMenu__) */
