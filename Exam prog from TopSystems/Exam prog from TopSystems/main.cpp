#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Figure.h"
using namespace std;

void PrintMenu();

int main()
{
    Figure a;
    unsigned int menu = 0;

    //Welcome
    cout << "Hi, if you want me, to create something, choose from what I can:" << endl;
    cout << "1 - square" << endl;
    cout << "2 - rectangle" << endl;
    cout << "3 - circle" << endl;
    cout << "4 - triangle" << endl;

    cin >> menu;

    while ( (menu > 4) || (menu == 0) )
    {
        cout << endl << "ERROR! Choose from the list!" << endl;
        cin >> menu;
    }
    
    a.TypeSelect(menu);

    a.PrintFigure();

    do 
    {
        PrintMenu();
        cin >> menu;

        switch (menu)
        {
            case 0:
                break;

            case 1:
            case 2:
            case 3:
            case 4:
            {
                a.TypeSelect(menu);
                a.PrintFigure();
                break;
            }
        
            case 5:
            {
                a.ChangeParam();
                a.PrintFigure();
                break;
            }

            default:
            {
                cout << endl << "ERROR! Choose from the list!" << endl;
                break;
            }
        }
    } while (menu != 0);
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
