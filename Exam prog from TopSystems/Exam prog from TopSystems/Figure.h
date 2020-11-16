#pragma once
#include <iostream>
using namespace std;

class Figure
{
private:
	int type;
	int parametr;
	int parametr2;

public:
	Figure()
	{
		type = 0;
		parametr = 10;
		parametr2 = 5;
	}

	int GetType()
	{
		return type;
	}

	void TypeSelect(int t)
	{
		type = t;
	}

	void SetParametr(int a)
	{
		parametr = a;
	}

	void SetParametr2(int b)
	{
		parametr2 = b;
	}

	void PrintFigure()
	{
		switch (type)
		{
		case 1: 
			PrintSquare(parametr); 
			break;
		case 2:	
			PrintRectangle(parametr, parametr2); 
			break;
		case 3: 
			PrintCircle(parametr); 
			break;
		case 4: 
			PrintTriangle(parametr); 
			break;
		default: 
			break;
		}
	}

	void PrintSquare(int p)
	{
		char a = 219;								
		// a = 219 - just a simbol from ASCII

		for (int i = 0; i < p; i++)
			for (int j = 0; j < p; j++)
			{
				if ((i == 0) || (i == p - 1))
					cout << a << a;
				else
					if ((j == 0) || (j == p - 1))
						cout << a << a;
					else
						cout << "  ";

				if (j == p - 1)
					cout << endl;
			}
		cout << "Default parametr: a = " << parametr << endl;
	}

	void PrintRectangle(int l, int h)
	{
		char a = 219;
		// a = 219 - just a simbol from ASCII

		for (int i = 0; i < h; i++)
			for (int j = 0; j < l; j++)
			{
				if ((i == 0) || (i == h - 1))
					cout << a << a;
				else
					if ((j == 0) || (j == l - 1))
						cout << a << a;
					else
						cout << "  ";

				if (j == l - 1)
					cout << endl;
			}
		cout << "Default parametr: l = " << parametr << ", h = " << parametr2 << endl;
	}

	void PrintCircle(int r)
	{
		char a = 219;
		// a = 219 - just a simbol from ASCII
		float R = 0;
		float Kmin = 0;
		float Kmax = 0;

		// Kmin and Kmax are coefficients, found empirically for correct "drawing" circles
		// For different radiuses these coefficients are different
		// If radius are smaller than 6, circle become too ugly and can't be named circle
		if (r < 7)
		{
			Kmin = 0.85;
			Kmax = 1.15;
		}
		
		if (r >= 7 && r < 10)
		{
			Kmin = 0.89;
			Kmax = 1.11;
		}
		if (r >= 10)
		{
			Kmin = 0.91;
			Kmax = 1.09;
		}

		for (int i = - r; i <= r; i++)
			for (int j = - r; j <= r; j++)
			{
				R = i * i + j * j;
				if ( (R >= Kmin * r * r) && (R <= Kmax * r * r) )
					cout << a << a;
				else
					cout << "  ";

				if (j == r)
					cout << endl;
			}
		cout << "Default parametr: r = " << parametr << endl;
	}

	void PrintTriangle(int h)
	{
		char a = 219;
		// a = 219 - just a simbol from ASCII

		for (int i = 0; i < h; i++)
			for (int j = 0; j < (2 * h) - 1; j++)
			{
				if ( (i == 0) && (j == h - 1))
					cout << a << a;
				else
				{
					if (i == h - 1)
						cout << a << a;
					else
					{
						if ( (i + j == h - 1) || (j == h + i - 1) )
							cout << a << a;
						else
							cout << "  ";
					}
				}
				if (j == 2 * (h - 1))
					cout << endl;

			}
		cout << "Default parametr: h = " << parametr << endl;
	}

	void ChangeParam()
	{
		switch (GetType())
		{
		case 1: 
		{
			int a = 0;
			cout << "Default side is: " << parametr << endl;
			cout << "Input your side: ";
			cin >> a;
			SetParametr(a);
			break;
		}

		case 2:
		{
			int l = 0;
			int h = 0;
			cout << "Default size is: " << parametr << " x " << parametr2 << endl;
			cout << "Input your size L and H: ";
			cin >> l >> h;
			SetParametr(l);
			SetParametr2(h);
			break;
		}

		case 3:
		{
			int r = 0;
			cout << "Default radius is: " << parametr << endl;
			cout << "NOTE! Circles with radius under 6 is too ugly and can't be named circles" << endl;
			cout << "Input your radius: ";
			cin >> r;
			SetParametr(r);
			break;
		}

		case 4:
		{
			int h = 0;
			cout << "Default triangle's hight is: " << parametr << endl;
			cout << "Input your hight: ";
			cin >> h;
			SetParametr(h);
			break;
		}
		default:
			break;
		}
	}
};
