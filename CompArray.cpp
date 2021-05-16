#include<bits/stdc++.h>
using namespace std;

int* compare(int a[3], int b[3])
{
	int arr[2];
	int countA = 0, countB = 0;
	for(int i = 0; i < 3; i++)
	{
		if(a[i] > b[i])
		{
			countA++;
		}
		if(b[i] > a[i])
		{
			countB++;
		}
	}
	
	arr[0] = countA;
	arr[1] = countB;
	
	return arr;
	
}

int main()
{
	int A[3], B[3];
	int i, j;
	
	for(i = 0; i < 3; i++)
	{
		cin>>A[i];
	}
	
	for(i = 0; i < 3; i++)
	{
		cin>>B[i];
	}
	
	int* ptr = compare(A, B);
	cout<<ptr[0]<<" "<<ptr[1];	
	return 0;
}
