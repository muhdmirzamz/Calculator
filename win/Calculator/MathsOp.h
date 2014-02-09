//
//  MathsOp.h
//  Calculator
//
//  Created by Muhd Mirza on 5/2/14.
//  Copyright (c) 2014 Muhd Mirza. All Rights Reserved.
//


#ifndef MATHSOP_H
#define MATHSOP_H

#include <iostream>

using namespace std;

class MathsOp
{
    public:
        MathsOp();

        inline void showTitleOfMathsOp(string title) {
                cout << title << endl;
        }

        inline void showErrorMessage() {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Error: Invalid input!" << endl;
        }

        void add();
        void subtract();
        void multiply();
        void divide();

        void endScreen();

    private:
        // addition variables
        double addDoubleOne;
        double addDoubleTwo;
        double sum;

        // subtraction variables
        double subtractDoubleOne;
        double subtractDoubleTwo;
        double difference;

        // multiplication variables
        double multiplyDoubleOne;
        double multiplyDoubleTwo;
        double product;

        // division variables
        double divideDoubleOne;
        double divideDoubleTwo;
        double division;

        // endScreen variables
        enum EndScreenOptions {
                ZERO,
                ADD,
                SUBTRACT,
                MULTIPLY,
                DIVIDE,
                END
        };

        int endScreenChoice;
};

#endif // MATHSOP_H
