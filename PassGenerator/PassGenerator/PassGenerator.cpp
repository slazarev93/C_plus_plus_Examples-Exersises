#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <istream>
using namespace std;

int main()
{
    int PassLenth = 1;
    cout << "Input lenth of new password: ";
    scanf ("%i", &PassLenth);
    char a = 1;
    int tmp = 0;
    //char arr[PassLenth];
    for (int i = 0; i < 255; i++)
    {
        printf("%c", a);
        tmp = a;
        tmp++;
        a = tmp;
        //a = (rand() % (255 + 1) + 1);
        //printf("%c", a);
    }


}

