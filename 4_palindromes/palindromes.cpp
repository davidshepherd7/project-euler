/* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91  99.

Find the largest palindrome made from the product of two 3-digit numbers. */

// Not actually a very good solution but it works!
// Should probably have some kind of sorting function to find the largest instead of spitting them all out into a terminal

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

// Check if an integer is a palindrome
bool palcheck(string p)
{
	// Find length of string p
	unsigned int p_length = p.length();
	
	// Check until length is 1 or 0:
	while(p_length > 1)
	{
		// If the two ends are the same erase them otherwise return 0
		if (p[0] == p[p_length-1])
		{
			// Have to make sure to erase final entry first because erasing the first entry changes the location of the final
			p.erase(p_length-1,p_length-1);
			p.erase(0,1);
		}
		else {return 0;}

		// Find the new length
		p_length = p.length();
	}

	return 1;
}

int main()
{
	// Create "string stream" object p
	ostringstream pstream;

	// for every pair of three digit numbers:
	for(unsigned int i=999; i>0; i--)
	{
		for(unsigned int j=i; j>0; j--)
		{

			// Clear pstream, assign i*j to pstream then convert to string
			pstream.str("");
			pstream << i*j;
			string p = pstream.str();

			// Check if string is a palindrome
			if (palcheck(p))
			{
					cout << "Palindrome found: " << i << " * " << j << " = " << i*j << endl;
			}

		} // End j (inner) for loop
	} // End i (outer) for loop
}

