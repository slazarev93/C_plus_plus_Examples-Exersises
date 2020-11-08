#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Figure.h"
using namespace std;

void PrintMenu();

int main()
{
    Figure a;
    int menu = 0;

    //Welcome
    cout << "Hi, if you want me, to create something, choose from what I can:" << endl;
    cout << "1 - square" << endl;
    cout << "2 - rectangle" << endl;
    cout << "3 - circle" << endl;
    cout << "4 - triangle" << endl;

    cin >> menu;
    a.TypeSelect(menu);

    a.PrintFigure();

    while (1)
    {
        PrintMenu();
        cin >> menu;

        if ((menu >= 1) && (menu <= 4))
            a.TypeSelect(menu);
        if (menu == 5)
            a.ChangeParam();
        if (menu == 0)
            break;

        a.PrintFigure();

    }
}

void PrintMenu()
{
    cout << "_______________________________________" << endl;
    cout << "Anothere Figure?" << endl;
    cout << "0 - exit" << endl;
    cout << "1 - square" << endl;
    cout << "2 - rectangle" << endl;
    cout << "3 - circle" << endl;
    cout << "4 - triangle" << endl;
    cout << "5 - change parametrs of selected Figure" << endl;
}
