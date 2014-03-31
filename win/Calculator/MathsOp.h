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

        // for performance and program convenience
        inline void showTitleOfMathsOp(string title) {
                cout << title << endl;
        }

        inline void showErrorMessage() {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid input! Try again!\n";
        }

        // every process is split into three parts
        // for recursion
        // and maybe user experience
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
        // addition variables
        double _addDoubleOne;
        double _addDoubleTwo;
        double _sum;

        // subtraction variables
        double _subtractDoubleOne;
        double _subtractDoubleTwo;
        double _difference;

        // multiplication variables
        double _multiplyDoubleOne;
        double _multiplyDoubleTwo;
        double _product;

        // division variables
        double _divideDoubleOne;
        double _divideDoubleTwo;
        double _division;

        // again, vuln here?
        char _endScreenChoice[10];
};

#endif // MATHSOP_H
