#include<iostream>
using namespace std;

int main()
{
	int N, A[1000], B[1000];
	int time = 0, temp = 0;
	int i, j, k;
	cin>>N;
	
	for(i = 0; i < N; i++)
	{
		cin>>A[i];
	}
	
	for(i = 0; i < N; i++)
	{
		B[i] = i+1;
	}
	
	for(j = 0; j < N; j++)
	{
		for(i = 0; i < N; i++)
	    {
		    temp = B[i];
		    B[i] = B[A[i]-1];
		    B[A[i]-1] = temp;
	    }
		time++;
	}
		
	for(i = 0; i < N; i++)
	{
		cout<<B[i]<<endl;
	}
	cout<<time;
	
	return 0;
}
