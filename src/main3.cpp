#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <iostream>
using namespace std;

template<class T>
T change(T x)
{
	return x*2;
}

template<>
char* change(char* x)
{
	int lenstr = strlen(x);
	for (int i = 0; i < lenstr; i++)
		x[i] = x[i]*2;
	return x;
}

int main()
{
	const int N = 5;
	char Arr[N] = { '1','2','3','4','5' };
	map<char, N>(Arr, change);
	for (int i = 0; i < N; i++) {
		cout << Arr[i] << endl;
	}
}