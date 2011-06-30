// brute force problem 1 of project Euler

// works! (but inefficient)

#include<iostream>

using namespace std;

int main()
{

  unsigned int total=0;

  for(unsigned int i=1; i<1000; i++)
{
  if (i%3==0||i%5==0) total += i;
 }

  cout << total << endl;
}
