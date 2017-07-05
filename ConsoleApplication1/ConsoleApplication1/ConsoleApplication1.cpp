
#include "stdafx.h"
#include <iostream>
#include <windows.h>



using namespace std;

int main()
{
	HANDLE  hConsole;
	int k;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (k = 1; k < 255; k++)
	{
		SetConsoleTextAttribute(hConsole, k);
		cout << k << " Hello Alec" << endl;
	}
	cin.get();
	return 0;
}



