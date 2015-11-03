/*
 * Q3-Muliply_Array_No.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

vector<int> multiply(vector<int> num1, vector<int> num2)
{
	bool neg = false;
	int m = num1.size();
	int n= num2.size();
	if(num1[0]<0 || num2[0] <0)
		neg=true;
	if(num1[0]<0 && num2[0]<0)
		neg=false;
	num1[0] = abs(num1[0]);
	num2[0] = abs(num2[0]);
	vector<int> result(m+n,0);
	reverse(num1.begin(),num1.end());
	reverse(num2.begin(),num2.end());
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			result[i+j] += num1[j]*num2[i];
			result[i+j+1] += result[i+j]/10;
			result[i+j] = result[i+j]%10;
		}
	}

	int i=m+n-1;
	while(i>0 && result[i]==0)
		i--;
	result.erase(result.begin()+i+1,result.end());
	reverse(result.begin(),result.end());
	if(neg)
		result[0] *= -1;
	return result;

}

/*
int main()
{
	int myint1[] = {1,9,3,7,0,7,7,2,1};
	int myint2[] = {7,6,1,8,3,8,2,5,7,2,8,7};
	//int myint1[] = {-7,9};
	//int myint2[] = {-8,5};
	vector<int> num1 (myint1,myint1 + sizeof(myint1)/sizeof(int));
	vector<int> num2 (myint2,myint2 + sizeof(myint2)/sizeof(int));
	print_vector(num1);
	print_vector(num2);
	vector<int> result = multiply(num1,num2);
	print_vector(result);
	return 0;

}
*/



