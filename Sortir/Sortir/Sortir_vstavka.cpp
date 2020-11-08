#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>

// Metod vstavki
int FindMinID(int* mas, int l)
{
	int MinID = 0;
	for (int i = 0; i < l; i++)
	{
		if (mas[i] < mas[MinID])
		{
			MinID = i;
		}
			
	}
	return MinID;
}

void Swap(int& max, int& min)
{
	int tmp = min;
	min = max;
	max = tmp;
}

void sortir(int* mas, int l)
{
	int minID = 0;
	for (int i = 0; i < l; i++)
	{
		minID = FindMinID(&mas[i], l-i);
		Swap(mas[i], mas[minID+i]);

	}
	printf("\n");
}

int main()
{
	int length = 0;
	printf("Sortir by Vstavka \nSize of array? ");
	scanf("%i", &length);

	int* arr = (int*)malloc(length * sizeof(int));

	/*
	printf("Input array\n");

	for (int i = 0; i < length; i++)
	{
		scanf("%i", &arr[i]);
	}
	*/

	//	random filling arr
	printf("\n");
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand()%10;
		printf("%i ", arr[i]);
	}
	printf("\n");	// newline after random filling and printing arr
	

	sortir(arr, length);

	for (int i = 0; i < length; i++)
	{
		printf("%i ", arr[i]);
	}

	free(arr);
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
