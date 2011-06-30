/* Find the greatest product of five consecutive digits in the 1000-digit number stored in file longnumber.
*/

// Note that no checking is done on the file for non-numeric characters (e.g. newline)
#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>

using namespace std;


int main()
{
	unsigned long temp_prod = 0;
	unsigned long largest = 1;
	int a;

	// Open file "longnumber" for input
	ifstream longnum("longnumber");
	if(!longnum) cerr << "Failed to open file" << endl;
	
	// Store first 5 digits from longnum in vector temp
	vector<int> temp(5);
	for(int i=0; i< temp.size(); i++) temp[i] = (longnum.get() - 48); // ASCII to int: subtract 48

	// While file has not ended
	while(longnum)
	{

		// Compare product of temp with largest found so far
		temp_prod = 1;
		for(int i=0; i < temp.size(); i++) temp_prod *= temp[i];
		if(temp_prod > largest) largest = temp_prod;

		// Delete first digit in temp read in next digit from longnum
		temp.erase(temp.begin());
		a = longnum.get() - 48;
		temp.push_back(a);
		
		// Output for testing:
		//for(int i=0; i < temp.size(); i++) cout << temp[i] << ",";
		//cout << endl;
	}

	cout << largest << endl;
}
