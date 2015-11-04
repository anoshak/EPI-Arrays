/*
 * Q9_Prime_Nos_Seive.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

vector<int> primes(int n)
{
	vector<int> result;
	vector<bool> numbers (n+1,1);

	for(int i=2;i<n;i++)
	{
		if(numbers[i])
		{
			result.push_back(i);
			for(int j=i;j<n+1;j += i)
			{
				numbers[j] = 0;
			}
		}
	}
	return result;
}

/*int main()
{
	vector<int> result = primes(20);
	print_vector(result);
	return 0;
}*/




