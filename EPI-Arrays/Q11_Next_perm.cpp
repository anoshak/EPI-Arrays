/*
 * Q11_Next_perm.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

void nextPerm(vector<int>& num)
{
	int i;
	for(i = num.size()-2;i>=0;i--)
	{
		if(num[i] < num[i+1])
			break;
	}
	if(i<0)
		return;
	for(int j=num.size()-1;;j--)
	{
		if(num[j]>num[i])
		{
			swap(num,i,j);
			reverse(num.begin()+i+1,num.end());
			return;
		}
	}
}

/*
int main()
{
	int myint[] = {6,2,1,5,4,3,0};
	vector<int> arr (myint, myint + sizeof(myint)/sizeof(int));
	print_vector(arr);
	nextPerm(arr);
	print_vector(arr);
	return 0;
}
*/




