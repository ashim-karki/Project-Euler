#include<iostream>

using namespace std;

void main()
{
	int product, checker, rem, pali, x = 0, largestPali = 0;
	for (int i = 100; i <= 999; i++)
	{
		for (int j = 100; j <= i; j++)
		{
			product = i * j;
			checker = product;
			pali = 0;
			x = 0;
			while (product != 0)
			{
				rem = product % 10;
				pali = pali * 10 + rem;
				product = product / 10;
				x = x + 1;
			}
			if (pali == checker && checker >= largestPali)
				largestPali = checker;
		}
	}
	cout << largestPali;
}
