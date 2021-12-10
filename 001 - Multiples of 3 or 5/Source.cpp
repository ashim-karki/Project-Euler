#include<iostream>

using namespace std;

void main()
{
	int num, sum = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	cout << sum;
}
