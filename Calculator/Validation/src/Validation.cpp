//
//  Validation.cpp
//  Calculator
//	Validation part of the calculator
//
//  Created by Muhd Mirza on 14/1/14.
//  Copyright (c) 2014 Muhd Mirza. All rights reserved.
//

#include "Validation.h"

using namespace std;

Validation::Validation() {
}

bool Validation::isCorrectNumber(int numberChoice) {
	bool isCorrect = true;
	
	if
	(numberChoice != 1 &&
	 numberChoice != 2 &&
	 numberChoice != 3 &&
	 numberChoice != 4
	) {
		return false;
	}
	
	return isCorrect;
}