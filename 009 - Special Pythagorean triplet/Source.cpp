#include<iostream>

using namespace std;

void main()
{
	int a, b, c;
	for (a = 1; a <= 1000; a++)
	{
		for (b = 1; b <= 1000; b++)
		{
			for (c = 1; c <= 1000; c++)
			{
				if (a + b + c == 1000 && (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a))
					break;
			}
			if (a + b + c == 1000 && (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a))
				break;
		}
		if (a + b + c == 1000 && (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a))
			break;
	}
	cout << a * b * c;
}
