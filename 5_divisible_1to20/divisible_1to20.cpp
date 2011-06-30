/* 
* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
* 
* What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include<iostream>
#include<math.h>

using namespace std;

bool checkprime(int p)
{
	// 2 is prime
	if(p==2) return 1;

	// Otherwise if even then not prime
	if(p%2==0) return 0;

	// Otherwise check for division by non-even numbers
	for(int i=3; i<=ceil(sqrt(p)); i+=2)
	{
		if(p%i==0) return 0;
	}
	return 1;
}

int main()
{
	// N is the number to go up to
	int N = 10;

	int a = 1;

	for(int i=10; i>0; i--)
	{
		// If i is prime then multiply a by it, otherwise a will be divisible by it via smaller i's
		if (checkprime(i))
			a *= i;
	}
	cout << a << endl;
}
