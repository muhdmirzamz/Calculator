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
	
	private:
		enum MathsOperations {
			ADD,
			SUBTRACT,
			MULTIPLY,
			DIVISION
		};
		
		char *array[7];
};

#endif /* defined(__Calculator__MainMenu__) */
