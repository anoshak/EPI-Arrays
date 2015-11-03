/*
 * Q4_Advancing_array.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

bool canReachEnd(vector<int>& nums)
{
	int furthest_index = 0;
	int end = nums.size();
	for(int i=0;i<end;i++)
	{
		furthest_index = max(furthest_index,nums[i] + i);
	}
	return (furthest_index >= end);

}



