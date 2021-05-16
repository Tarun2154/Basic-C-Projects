#include <iostream> 
using namespace std;

int main()
{
	int i, j, N, sum[1000], A[1000];
	int k = 0, total = 0, temp = 0, times = 0;
	cin>>N;
	for(i = 0; i < N; i++)
	{
		cin>>A[i];
	}
		
	for(i = 0; i < N; i++)
	{	
		for(j = i+1; j < N; j++)
		{
			if(A[i] > A[j])
			{	
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;	
			}
		}
	}
	
	for(i = 0; i < N; i++)
	{
		total = total + A[i];
		sum[k] = total;
		k++;
	}
	
	for(i = 1; i < k; i++)
	{
		times = times + sum[i];
	}
	
	cout<<times;
	
	return 0;
}
