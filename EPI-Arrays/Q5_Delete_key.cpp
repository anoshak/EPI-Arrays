/*
 * Q5_Delete_key.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

void remove_key(vector<int>& arr, int key)
{
	int i=0,copy=0;
	while(i<arr.size())
	{
		if(arr[i] != key)
		{
			arr[copy++] = arr[i++];
		}
		else i++;
	}
	for(int i=copy;i<arr.size();i++)
	{
		arr[i] = 0;
	}
}

/*int main()
{
	int myint[] = {2,4,1,5,1,5,4,7,3,7,1,6,3,7};
	vector<int> arr (myint, myint + sizeof(myint)/sizeof(int));
	print_vector(arr);
	remove_key(arr,1);
	print_vector(arr);
	return 0;
}*/

