#include<iostream>
using namespace std;

int binomial(int n, int r)
{
	int C[n+1][r+1];
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= min(i, r); j++)
		{
			if(j == 0 || j == i)
			   C[i][j] = 1;
			
			else
			   C[i][j] = C[i-1][j-1] + C[i-1][j];   
		}
	}
	return C[n][r];
}

int main()
{
	int t, r, n, i, j;
	int combinations;
	
	cin>>t;
	for(int k = 1; k <= t; k++)
	{
	
	cin>>r;
	cin>>n;
	
	int initial = n/r;
	int type_1 = initial + 1;
	int type_2 = initial;
	int extra_1 = n%r;
	int extra_2 = r - extra_1;
	
	combinations = 1; 

	for(i = 0; i < extra_1; i++)
	{
		combinations = combinations * binomial(n, type_1);
		n = n - type_1;
	}
	
	for(j = 0; j < extra_2; j++)
	{	
		combinations = combinations * binomial(n, type_2);
		n = n - type_2;
	}
	
	cout<<combinations;
	
    }
    
	return 0;
}
