//
//  MainMenu.h
//  Calculator
//
//  Created by Muhd Mirza on 5/2/14.
//  Copyright (c) 2014 Muhd Mirza. All Rights Reserved.
//

#ifndef MAINMENU_H
#define MAINMENU_H

#include "MathsOp.h"

using namespace std;

class MainMenu
{
    public:
        MainMenu();
        ~MainMenu();

        void showOptions();

    private:
        enum MathsArithmetics {
            ZERO,
            ADD,
            SUBTRACT,
            MULTIPLY,
            DIVIDE
        };

        int choice;
        MathsOp *mathsOp;
};

#endif // MAINMENU_H
