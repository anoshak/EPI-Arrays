#include "common_utils.h"

void DutchPartition(vector<int>& arr, int pivot_index)
{
	int pivot = arr[pivot_index];
	int n = arr.size();
	int less=0,greater = n-1;
	int i=0;
	while(i<=greater)
	{
		if(arr[i] < pivot)
		{
			swap(arr,i,less);
			less++;
			i++;
		}
		else if (arr[i] > pivot)
		{
			swap(arr,i,greater);
			greater--;
		}
		else i++;
	}

}

/*int main()
{
	int myints[] = {2,1,3,1,2,3,3,1,2,3,1,1,2};
	vector<int> arr (myints,myints + sizeof(myints)/sizeof(int));
	print_vector(arr);
	DutchPartition(arr,0);
	print_vector(arr);
	return 0;
}*/
