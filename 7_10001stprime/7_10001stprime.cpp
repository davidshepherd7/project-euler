/* 
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *
 * What is the 10001st prime number?
 */

#include<iostream>
#include<cmath>
#include"../other/headers/project_euler.h"

using namespace std;

int main()
{
	// start from 5 because checkprime does not work for 2,3 (efficiency reasons)
	int i = 2;
	int j = 5;

	while(i<10001)
	{
			if(checkprime(j)){cout << j << endl; i++;}
			j++;
	}
}
