/* The prime factors of 13195 are 5, 7, 13 and 29.

   What is the largest prime factor of the number 600851475143 ? */

// brute force
// far too slow, as expected...

#include <iostream>
#include <math.h>

// check if x is prime and if so return 1, otherwise return 0.
bool checkprime(double x)
{
  for(double i=2; i<x; i++)
    {
      if((x%i)==0) return 0;
      std::cout<< x << "mod" << i << " = " << x%i << std::endl; //testing feedback
    } //end for
  return 1;
} // end checkprime


// begin main function
int main()
{
  double N = 60085147514;
  double i=0;

  N/=2; // factors can't be higher than half the number so divide by two.

  for(i; !(N%i==0 && checkprime(i)) && i<=sqrt(N); i++)
    {
      std::cout << i << std::endl;
    } //end for

  std::cout << N-i << std::endl;

} // end main

