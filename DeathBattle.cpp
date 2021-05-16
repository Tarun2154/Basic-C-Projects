#include<iostream>
#include<cmath>
#include<algorithm>
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
	int A, H, L1, L2, M, C;
	int i, j, k;
	
	int temp, time = 0;
	
	cin>>A>>H>>L1>>L2>>M>>C;
	
	int p = 0;
	int q = pow(L2, M);
	
	if(M*(A+C) < H)
	    cout<<"RIP";
	
	else if(M*A > H)
	    cout<<"1/1";
	
	else
    {
    	temp = H - (M*A);
    	while(temp > 0)
    	{
    		time++;
    	    temp = temp - C;
		}    
    	
	    for(i = time; i <= M; i++)
	    {
	    	if(i == 0)
	    	    p = p + pow((L2-L1),((M-i)));
	    	
			else if(i == M)
			    p = p + pow(L1, i);
			     
	    	else
			   	p = p + pow(L1,i)*(pow((L2-L1),(M-i)))*(binomial(M,i));
	    	
		}
    	
    	int gcd = __gcd(p, q);
		p = p/gcd;
		q = q/gcd;
		
		cout<<p<<"/"<<q;	
	}
	    	
	return 0;
}
