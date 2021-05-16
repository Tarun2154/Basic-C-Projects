#include<iostream>
using namespace std;

int main()
{
	int i, j, N, k, factors[1000], index = 0;
	
	cin>>N;
	cin>>k;
	
	for(i = 1; i <= N; i++)
	{
		if(N%i == 0)
		{
			factors[index] = i;
			index++;
		}
	}
	
	if(k <= index)
	{
	    cout<<factors[k];
	}
	else
	{
		cout<<1;
	}
	
	return 0;
}
