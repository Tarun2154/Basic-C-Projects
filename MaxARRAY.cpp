#include<iostream>
#include<climits>
using namespace std;

int maxSum(int a[], int size)
{
	int maxsofar = INT_MIN, maxending = 0;
	for(int i =0;i<size;i++)
	{
		maxending = maxending + a[i];
		if(maxsofar < maxending)
		 maxsofar = maxending;
		if(maxending < 0)
		 maxending = 0; 
	}
	return maxsofar;
}

int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n =sizeof(a)/sizeof(a[0]);
	int max_sum = maxSum(a,n);
	cout<<"Max sum is :"<<max_sum;
	return 0;
}
