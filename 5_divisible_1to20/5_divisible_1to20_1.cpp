/* 
* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
* 
* What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include<iostream>

using namespace std;


int gcd(int n,int m){return m==0?n:gcd(m,n%m);}


main()
{
	int N = 20;
	int a = 1;
	int multi;

	cout << "1";
	for(int i=1; i<=N; i++)
	{
		if((a%i)!=0)
		{
			multi = (i/gcd(i,a));
			cout << " * " << multi;
			a *= multi;
		}
	}
	cout << " = " << a << endl;
}
