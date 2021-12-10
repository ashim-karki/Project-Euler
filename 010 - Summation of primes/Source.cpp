#include<iostream>
#include<math.h>

using namespace std;

//Using Sieve of Eratosthenes and dynamic array the program completes in no time at all. 
void main()
{
	int n = 2000000;
	unsigned long long sum = 0;
	int* primes = new int[n];
	for (int i = 0; i <= n; i++)
	{
		primes[i] = 1; //1 if the array's position is prime else 0.  First assuming all numbers are prime.
	}
	primes[0] = 0;
	primes[1] = 0;
	for (int i = 2; i <= sqrt(n); i++)//if a number is not struck off until its square root it won't be struck off at all.
		if (primes[i] == 1)
		{
			for (int j = 2; i * j <= n; j++)
				primes[i * j] = 0;//Striking off composite numbers.
		}
	}
	for (int i = 0; i <= n; i++)
	{
		if (primes[i] == 1)
		{
			sum += i;
		}	
	}
	cout << sum;
}

/* 
* Linked list was used to store all the primes in heap section of memory. The program runs correctly but the runtime is about 6 minutes so it is not the best of algorithms.
class Node
{
public:
	int prime;
	Node* link;
};

Node* head;

void addPrime(int data)
{
	Node* temp = new Node();
	temp->prime = data;
	temp->link = head;
	head = temp;
}

bool checkPrime(int num)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (num % temp->prime == 0)
			return false;
		temp = temp->link;
	}
	return true;
}

void sumofPrimes()
{
	unsigned long long int sum = 0;
	Node* temp = head;
	while (temp != NULL)
	{
		sum += temp->prime;
		temp = temp->link;
	}
	cout << sum << endl;
}

void main()
{
	head = NULL;
	addPrime(2);
	for (int i = 3; i <= 2000000; i += 2)
	{
		if (checkPrime(i) == true)
		{
			addPrime(i);
		}
	}
	sumofPrimes();
}


***Even though this program is correct it cannot be used to store large number of primes as it uses stack section of memory which is very small.***
void main()
{
	long long int primenums[50000] = { 0 };
	primenums[0] = 2;
	int j = 0, sum = 0, k = 0;
	for (long long int i = 3; i < 2000000; i += 2)
	{
		j = 0;
		while (true)
		{
			if (primenums[j] != 0 && i % primenums[j] != 0 && i > primenums[j])
			{
				j++;
				continue;
			}
			else if (primenums[j] == 0)
			{
				primenums[j] = i;
				break;
			}
			else
				break;
		}
		k++;
		cout << k << endl;
	}
	j = 0;
	while (primenums[j] != 0)
	{
		sum += primenums[j];
		j++;
	}
	cout << sum;
}*/
