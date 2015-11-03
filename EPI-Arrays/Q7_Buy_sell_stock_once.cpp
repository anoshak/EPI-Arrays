/*
 * Q7_Buy_sell_stock_once.cpp
 *
 *  Created on: Nov 3, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

double maxProfit(vector<double> stocks)
{
	double min = INT_MAX;
	double max = INT_MIN;
	for(unsigned i=0;i<stocks.size();i++)
	{
		if(stocks[i] < min)
			min = stocks[i];
		else if (stocks[i] - min > max)
			max = stocks[i] - min;
	}
	return max;
}

/*
int main()
{
	double myint[] = {310,315,275,295,260,270,290,230,255,250};
	vector<double> arr (myint, myint + sizeof(myint)/sizeof(double));
	cout<<maxProfit(arr);
	return 0;

}
*/


