#include<iostream>
#include<cstdlib>
using namespace std;

int patient(int a, int b)
{
	int x = b-15;
	int y = (6-a)*(6-a);
	int pat = y + abs(x);
	return pat; 
}

int maxDays(int m)
{
	switch(m)
	{
		case 1: return 28;
		case 4:
		case 6:
		case 9:
		case 11: return 30;
		default: return 31;	
	}
}

int main()
{
	int N, tv, ntv, s;
	int traffic, r1, r2;
	int i, k, M, D;
	int target, limit, cost = 0;
    int A[365], F[52];
	int index = 0, count = 0, final = 0;
	
	cin>>N;
	cin>>r1;
	cin>>r2;
	cin>>target; 
	
	for(M = 1; M <= 12; M++)
	{
		limit = maxDays(M);
		for(D = 1; D <= limit; D++)
		{
			A[index] = patient(M, D);
			index++;
		}	
    }
    
	for(i = 0; i < N; i++)
	{
		for(k = 0; k < 365; k++)
		{
		    traffic = A[k];
			
			if(traffic >= N)
			{
				ntv = N - i;
				cost = cost + i*r1 + ntv*r2;
			}
			else
			{
				ntv = N - i;
				tv = traffic - ntv;
				
				if(tv <= 0)
				    cost = cost + traffic*r2;
				    
				else
				    cost = cost + tv*r1 + ntv*r2;    	
			}
			
			final = final + cost;
			cost = 0;	
		}
		
		if(final >= target)
		{
			    s = i;
		        break;
	    }
		else 
		    final = 0;
			   	
	}
	
	if(final >= target)
		cout<<i;
        
	else 
		cout<<N;
	
   	
	return 0;	
}
