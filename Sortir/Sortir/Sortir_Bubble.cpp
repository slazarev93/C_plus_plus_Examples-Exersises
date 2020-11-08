#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>

void Swap(int& max, int& min)
{
	int tmp = min;
	min = max;
	max = tmp;
}

void SortBubble(int* mas, int l)
{
	while (1)
	{
		bool ctrl = true;
		for (int i = 1; i < l; i++)
		{
			if (mas[i] < mas[i - 1])
			{
				Swap(mas[i - 1], mas[i]);
				ctrl = false;
			}
		}

		if (ctrl)
			break;
	}
}

int main()
{
	int length = 0;
	printf("Sortir by Bubble! \nSize of array? ");
	scanf("%i", &length);

	int* arr = (int*)malloc(length * sizeof(int));


	printf("\n");
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 10;
		printf("%i ", arr[i]);
	}
	printf("\n");	// newline after random filling and printing arr


	SortBubble(arr, length);

	for (int i = 0; i < length; i++)
	{
		printf("%i ", arr[i]);
	}

	free(arr);
}