/*
 * Q18_Spiral_Matrix.cpp
 *
 *  Created on: Nov 4, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

vector<int> spiral(vector<vector<int> >& matrix)
{
	vector<int> result;
	int m = matrix.size();
	if(m==0)
		return result;
	int n = matrix[0].size();
	if(m==1)
	{
		for(int i=0;i<n;i++)
			result.push_back(matrix[0][i]);
		return result;
	}
	for(int i=0;i<n-1;i++)
		result.push_back(matrix[0][i]);
	for(int i=0;i<m-1;i++)
		result.push_back(matrix[i][n-1]);
	for(int i=n-1;i>0;i--)
		result.push_back(matrix[n-1][i]);
	for(int i=m-1;i>0;i--)
		result.push_back(matrix[i][0]);

	vector<vector<int> > copymat (matrix);

	copymat.erase(copymat.begin());
	copymat.erase(--(copymat.end()));
	for(int i=0;i<copymat.size();i++)
	{
		vector<int>& temp = copymat[i];
		temp.pop_back();
		temp.erase(temp.begin());
	}

	vector<int> rec_result = spiral(copymat);
	result.insert(result.end(),rec_result.begin(),rec_result.end());
	return result;
}
/*

int main()
{
    vector<vector<int> > matrix;
	vector<int> temp;
	for(int i=0;i<4;i++)
	{
		for(int j=4*i +1;j<4*i+5;j++)
		{
			temp.push_back(j);
		}
		matrix.push_back(temp);
		temp.clear();
	}

	print_vector_matrix(matrix);
	vector<int> result = spiral(matrix);
	print_vector(result);

}
*/

