#include<iostream>

using namespace std;

void main()
{
	long long int num = 600851475143;
	int currentprime = 2, count = 0;
	while (true)
	{
		if (num % currentprime == 0)
			num /= currentprime;
		else
			while (true)
			{
				count = 0;
				currentprime += 1;
				for (int k = 1; k <= currentprime; k++)
				{
					if (currentprime % k == 0)
						count += 1;
				}
				if (count == 2)
					break;
			}
		if (currentprime >= num)
			break;
	}
	cout << currentprime;
}