#pragma once
#include <cstring>
#include <cstddef>

template <typename T> 
void msort(T* Arr, int N)
{
	if (N > 1)  msort(Arr, N / 2); 
	if (N > 1)  msort(Arr + (N / 2), N - (N / 2)); 
	
	T*NewArr = new T[N];

	int i = 0;   
	int j = N/2;

	for (int k = 0; k < N; k++)
	{
		if ((j >= N) || ((i < N / 2) && (Arr[i] < Arr[j]))) 
		{
			NewArr[k] = Arr[i];
			i++;
		}
		else 
		{
			NewArr[k] = Arr[j];
			j++;
		}
	}
	for (i = 0; i < N; i++)
	{
		Arr[i] = NewArr[i];
	}
}

template <>
void msort(char** Arr, int N)
{
	int center = N / 2; 
	if (N > 1)  msort(Arr, N / 2); 
	if (N > 1)  msort(Arr + (N / 2), N - (N / 2)); 

	char**NewArr = new char*[N];

	int i = 0;   
	int j = center; 

	for (int k = 0; k < N; k++)
	{
		if ((j >= N) || ((i < N / 2) && (strlen(Arr[i]) < strlen(Arr[j])))) 
		{
			NewArr[k] = Arr[i];
			i++;
		}
		else 
		{
			NewArr[k] = Arr[j];
			j++;
		}
	}
	for (i = 0; i < N; i++)
	{
		Arr[i] = NewArr[i];
	}
}
