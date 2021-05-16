#include<iostream>
using namespace std;

int main()
{
	int k;
	int i, n, index = 0, A[1000];
	cin>>k;
	for(int x = 1; x <= k; x++)
	{
		
	cin>>n;
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			A[index] = i;
			index++;
		}
	}
	
    }
    for(int j = 0; j < index; j++)
	{
		cout<<A[j]<<" ";
	}
	return 0;
}
