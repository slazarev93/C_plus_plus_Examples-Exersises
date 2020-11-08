#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include "Rational.h"

int main()
{
    while (1)
    {
        printf("Input something: ");
        char op;
        Rational a = ReadRational();
        scanf(" %c", &op);
        Rational b = ReadRational();
        Rational Res{ 0,0 };

        switch (op)
        {
            case '+':
            {
                Res = SumRational(a, b);
                break;
            }
            case '-':
            {
                Res = SubRational(a, b);
                break;
            }
            case '*':
            {
                Res = MulRational(a, b);
                break;
            }
            case '/':
            {
                Res = DivRational(a, b);
                break;
            }
            default:
            {
                printf("ERROR");
                break;
            }
        }

//        ReduceRational(Res);

        PrintRational(a);
        printf(" %c ", op);
        PrintRational(b);
        printf(" = ");
        PrintRational(ReduceRational(Res));
        printf("\n\n");
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
