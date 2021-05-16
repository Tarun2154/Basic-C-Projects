#include<iostream>
using namespace std;

int bitscore(int n)
{
	int n1, n2, n3;
	n1 = n/100;
	n2 = (n%100)/10;
	n3 = (n%100)%10;
	
	int bit;
	int x = max(n1, (n2, n3));
	int y = min(n2, (n1, n3));
	bit = (x*11) + (y*7);
	bit = bit % 100;
	return bit;      	
}

int findpairs(int arr[], int n)
{
	int digit[10], pairs = 0, i, ms;
	for(i = 0; i < 10; i++)
	{
		digit[i] = 0;
	}
	
	for(i = 0; i < n; i = i+2)
	{
		ms = arr[i]/10;
		for(int j = i+2; j < n; j = j+2)
		{
			if(ms == arr[j]/10)
			{
				if(digit[ms] < 2)
				   digit[ms]++;
			}
		}
	}
	
	for(i = 1; i < n; i = i+2)
	{
		ms = arr[i]/10;
		for(int j = i+2; j < n; j = j+2)
		{
			if(ms == arr[j]/10)
			{
				if(digit[ms] < 2)
				   digit[ms]++;
			}
		}
	}
	
	for(i = 0; i < 10; i++)
	{
		pairs = pairs + digit[i];
	}
	
	return pairs;
}

int main()
{
	int n, N[501], B[501];
	int i, j, k, pair;
	
	cin>>n;
	
	for(i = 0; i < n; i++)
	{
		cin>>N[i];
	}
	
	for(j = 0; j < n; j++)
	{
		B[j] = bitscore(N[j]);   
	}
	
	pair = findpairs(B, n);
	cout<<pair;
	
	return 0;
}
