/*
 * Q2-Increment_Array_No.cpp
 *
 *  Created on: Nov 2, 2015
 *      Author: Anoshak
 */
#include "common_utils.h"

vector<int> increment(vector<int>& nums) {
	int carry = 1, i = nums.size() - 1;
	while (carry) {
		int no = nums[i] + carry;
		nums[i] = no % 10;
		carry = no / 10;
		i--;
		if (i < 0)
			break;
	}
	if (carry)
		nums.insert(nums.begin(),1);
	return nums;
}

/*
int main()
{
	int myint[] = {9,9,9,9};
	vector<int> arr (myint,myint + sizeof(myint)/sizeof(int));
	print_vector(arr);
	vector<int> result = increment(arr);
	print_vector(result);
	return 0;
}
*/




