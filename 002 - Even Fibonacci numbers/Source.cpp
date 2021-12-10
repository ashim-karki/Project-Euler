#include<iostream>

using namespace std;

void main()
{
	long int sumStorage[100];
	sumStorage[0] = 1;
	sumStorage[1] = 2;
	for (int i = 0; i <= 29; i++)
	{
		sumStorage[i + 2] = sumStorage[i + 1] + sumStorage[i];
	}
	long int sumFinal = 0;
	for (int i = 0; i <= 31; i++)
	{
		if (sumStorage[i] % 2 == 0)
			sumFinal += sumStorage[i];
	}
	cout << sumFinal;
}