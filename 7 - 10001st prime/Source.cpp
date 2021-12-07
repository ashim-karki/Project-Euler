#include<iostream>

using namespace std;

//there are way faster programs to this question over the internet
void main()
{
	long long int lastprime = 1;
	int count = 0;
	int i = 1;
	while (i != 10001)
	{
		while (true)
		{
			lastprime += 2; //skipping even numbers
			count = 0;
			for (int k = 1; k <= lastprime; k++)
			{
				if (lastprime % k == 0)
					count += 1;
			}
			if (count == 2)
			{
				break;
			}
		}
		i++;
	}
	cout << lastprime;
}