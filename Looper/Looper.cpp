// Looper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int eval(int a, int b)
{
	if (a > b)
	{
		for (int i = 0; i < a.length; i++)
		{
			return i;
		}

	}
	else
	{
		return b;

	}

}
int main()
{
	int x = 4;
	int y = 5;
	cout << eval(x,y);
}

	


