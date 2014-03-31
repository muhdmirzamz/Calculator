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
        // to free resources
        ~MainMenu();

        void showOptions();

        // inline-declared makes it easy to show the error message
        // without typing it everytime
        // improves app performance
        inline void showErrorMsg();

    private:
        // really unsure if there's a vuln here?
        char _choice[10];
        MathsOp *mathsOp;
};

#endif // MAINMENU_H
