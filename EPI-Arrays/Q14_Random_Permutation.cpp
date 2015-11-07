/*
 * Q14_Random_Permutation.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

vector<int> randomPermute(int n)
{
	vector<int> data(n);
	for(int i=0;i<n;i++)
		data[i] = i;
	srand(time(NULL));
	for(int i=0;i<n-1;i++)
	{
		int idx = rand()%(n-i) + i;
		swap(data,i,idx);
	}
	return data;
}

/*
int main()
{
	vector<int> result = randomPermute(10);
	print_vector(result);
	return 0;
}
*/


