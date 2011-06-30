/*
 * The sum of the squares of the first ten natural numbers is,
 *
 * 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first ten natural numbers is,
 *
 * (1 + 2 + ... + 10)^2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

#include<iostream>

using namespace std;

int main()
{

	unsigned N = 100;
	long sumsq = 0;
	long sum = 0;
	long sqsum;

	for(int i=1; i<=N; i++)
	{
		sumsq += i*i;
		sum += i;
	}

	sqsum = sum*sum;

	int diff = sqsum - sumsq;

	cout << "sumsq = " << sumsq << " sqsum = " << sqsum << " diff = " << diff << endl;

}
