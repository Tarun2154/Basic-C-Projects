#include<iostream>
#include <algorithm> 
using namespace std;

int longestSubSeq(int M[], int n)
{
	int LIS[n] = {0};
	LIS[0] = 1;
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(M[i] > M[j] && LIS[i] < LIS[j])
			{
				LIS[i] = LIS[j];
			}
		}
		LIS[i]++;
	}
	return *max_element(LIS, LIS + n); 
}

int main()
{
	int M[] = {10, 22, 9, 33, 21, 4, 50, 41, 60, 70};
	int n = sizeof(M)/sizeof(M[0]);
	cout<<"Length of the Longest Increasing Sub-Sequence = "<<longestSubSeq(M, n);
	return 0;
}
