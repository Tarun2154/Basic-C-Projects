#include<iostream>
using namespace std;

int main()
{
	int N;
	int i, j, k, x, y;
	int gr = 0, gm = 0;
	int count = 0, sum;
	char B[10000], G[10000];
	cin>>N;

	for(i = 0; i < N; i++)
	{
		cin>>B[i];
	}
	
	for(j = 0; j < N; j++)
	{
		cin>>G[j];
	}
	
	for(x = 0; x <= N; x++)
	{
		if(G[x] == 'r')
		   gr++;
        else
		   gm++; 
	}
		
	for(y = 0; y < N; y++)
	{
		if(B[y] == 'r')
	    {
	    	if(gr > 0)
	    	{
	    		gr--;
	    		count++;
			}
			else
			    break;
		}
		else
		{
			if(gm > 0)
			{
				gm--;
				count++;
			}
			else
			    break;
		}	
	}
	
	sum = N - count;
	cout<<sum;
}
