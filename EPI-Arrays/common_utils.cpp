/*
 * common_utils.cpp
 *
 *  Created on: Nov 2, 2015
 *      Author: Anoshak
 */
#include "common_utils.h"

void print_vector(vector<int>& arr)
{
	for(unsigned i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void swap (vector<int>& arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

