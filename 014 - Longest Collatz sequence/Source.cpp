#include<iostream>

using namespace std;

void main()
{
	unsigned long long int lastcount = 0, currentcount = 0, starting = 0, longest = 0;
	for (long long int i = 1; i <= 1000000; i++)
	{
		currentcount = 0;
		starting = i;
		while (starting != 1)
		{
			if (starting % 2 == 0)
				starting = starting / 2;
			else
				starting = 3 * starting + 1;
			currentcount += 1;
		}
		if (currentcount > lastcount)
		{
			longest = i;
			lastcount = currentcount;
		}
	}
	cout << longest;
}