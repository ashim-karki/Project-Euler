#include<iostream>

using namespace std;

double findHCF(double a, double b)
{
	double hcf = a;
	while (hcf != 0)
	{
		if ((int)a % (int)hcf == 0 && (int)b % (int)hcf == 0)
			break;
		else
			hcf = hcf - 1;
	}
	return hcf;
}

void main()
{
	double lcm = 2;
	for (double i = 3; i <= 20; i++)
	{
		lcm = (i * lcm) / findHCF(i, lcm);
	}
	cout << fixed << lcm; //fixed is a stream manipulator. This flag sets the floatfield to fixed. It means that the floating-point values will be written in fixed point notations rather than scientific notation in terms of 'e'.
}

//Not a Good option to use loops when a large number is to be evaluated even though this program runs correctly.
/*void main()
{
	int current = 1, count = 1;
	while (true)
	{
		count = 1;
		while (true)
		{
			if (current % count == 0)
				count += 1;
			else
				break;
		}
		if (count >= 20)
			break;
		else
			current += 1;
		cout << current << endl;
	}
	cout << current;
}*/
