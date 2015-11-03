/*
 * Q6_Delete_duplicates_sorted_array.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

void delete_dup(vector<int>& arr)
{
	int i=0,copy=0;
	int n= arr.size();
	while(i<n)
	{
		arr[copy++] = arr[i++];
		while(i<n && arr[i]==arr[i-1])
			i++;
	}
	for(int i=copy;i<n;i++)
		arr[i] = 0;
}
/*

int main()
{
	int myint[] = {1,1,2,3,4,5,5,5,6,6,7,8,9,9,9,9,10};
	vector<int> arr (myint, myint + sizeof(myint)/sizeof(int));
	print_vector(arr);
	delete_dup(arr);
	print_vector(arr);
	return 0;
}
*/


