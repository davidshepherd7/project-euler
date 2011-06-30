// Print the maximum number that can be held by each variable type.
//
//
#include<iostream>
#include<limits>
#include<limits.h>

using namespace std;

int main()
{
	cout << "largest float = " << numeric_limits<float>::max() << endl;
	cout << "smallest float = " << numeric_limits<float>::min() << endl;

	cout << "largest double = " << numeric_limits<double>::max() << endl;
	cout << "smallest double = " << numeric_limits<double>::min() << endl;

	cout << "largest int = " << INT_MAX << endl;
	cout << "largest unsigned int = " << UINT_MAX << endl;
	cout << "largest long int = " << LONG_MAX << endl;
	cout << "largest unsigned long int = " << ULONG_MAX << endl;

}
