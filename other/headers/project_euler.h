// Header file to contain commonly used functions for project Euler problems

// Check if number is prime (except for 2 and 3)
bool checkprime(int p_test)
{
	if((p_test%2) == 0) return 0;
	
	int a = (p_test%6);	
	if( !( (a == 1)||(a == 5) ) ) return 0;

	for(int i=3; i <= ceil(sqrt(p_test)); i+=2)
	{
		if((p_test%i) == 0) return 0;
	}

	return 1;
}
