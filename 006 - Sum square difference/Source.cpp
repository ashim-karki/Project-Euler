#include<iostream>

using namespace std;

void main()
{
	double sum = 0, sqrsum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
		sqrsum += i * i;
	}
	cout << fixed << sum * sum - sqrsum;
}
