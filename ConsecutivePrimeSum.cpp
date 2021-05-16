#include<iostream>
#include <cmath>
using namespace std;

int isPrime(int n)
{
	bool prime = true;
	for(int i=2; i <= n/2; i++)
	{
		if(n%i==0)
		{
			prime = false;
			break;
		}	
	}
	return prime;	
}

int main()
{
	int N, i, a;
	int lp[1000];
	int sum = 0, lindex = 0, count = 0;
	bool p;
	
	cin>>N;
	
	for(i = 2; i <= N; i++)
	{
		p = isPrime(i);
		if(p == true)
		{
			lp[lindex] = i;
			lindex++;
		}
	}
		
    for(a = 0; a < lindex; a++)
    {
    	sum = sum + lp[a];
        p = isPrime(sum);
        if(p == true && sum != 2 && sum < N)
        {
        	count++;
		}	   
	}
	cout<<count;
	return 0;
}
