/* The prime factors of 13195 are 5, 7, 13 and 29.

   What is the largest prime factor of the number 600851475143 ? */

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int x = 600851475143;
	
	// treat 2 seperately then can ignore all other even numbers since they are not primes
	while (x%2==0)
	{
		x/=2;
		cout << 2 << '\t';
	}


	for(int i=3; i<=ceil(sqrt(x)); i+=2)
	{
		cout << i;
		if (x%i==0)	// if find a factor then divide it out and print it
		{
			x/=i;
			cout << i << '\t';
			i--;	//test i again in case of square etc. factors
		}
	}
	// final value of x is also a prime factor (unless it is 1)
	if (x!=1) cout << x << '\t';
	cout << endl; 
}
