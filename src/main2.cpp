#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <iostream>
using namespace std;

template<class T>
T gen()
{
	return 9;
}

int main()
{
	const int n = 5;
	double* mas;
	mas = createArr<double, n>(gen);
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
	delete[]mas;
	return 0;
}