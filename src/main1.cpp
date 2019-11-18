#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <iostream>
using namespace std;

int main()
{
	int Arr[5] = { 6, 9, 0, 2, 3};
	msort<int>(Arr, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

