/*
 * Q12_Sample_Offline_Data.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

vector<int> sampling(vector<int>& data, int size)
{
	if(size > data.size())
		return data;
	bool flag = false;
	if(size > (data.size())/2)
	{
		flag = true;
		size = data.size()-size;
	}
	srand(time(NULL));
	for(int i=0;i<size;i++)
	{
		int index = rand()%(data.size()-i) + i;
		swap(data,i,index);
	}
	if(flag)
		return vector<int> (data.begin()+size,data.end());
	return vector<int> (data.begin(),data.begin()+size);

}

/*
int main()
{
	int myint[] = {1,2,3,4,5,6,7,8,9};
	vector<int> data (myint,myint + sizeof(myint)/sizeof(int));
	print_vector(data);
	vector<int> result = sampling(data,3);
	print_vector(result);
	return 0;
}
*/


