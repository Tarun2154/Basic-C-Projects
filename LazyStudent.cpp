#include<iostream>
#include <algorithm> 
#include <cmath> 
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

int modInverse(int a, int m)
{
    a = a%m;
    for(int x = 1; x < m; x++)
    if((a*x)%m == 1)
	   return x;
}

int mult(int a, int b, int c)
{
	int ans = (a*b)%c;
	return ans;
}

int main()
{
     int K;
     cin>>K;
     for(int i = 0; i < K; i++)
     {
     	int N, M, T;
	    int prime = pow(10, 9) + 7;
	    
		cin>>N;
 	    cin>>M;
	    cin>>T;  
	    	      
	    int X = N-M;  
	    int denominator = binomial(N, T);
		int numerator = binomial(X, T);
		
		int p = denominator - numerator;
		int q = denominator;  
		
		int gcd = __gcd(p, q);
		p = p/gcd;
		q = q/gcd;
		
		int q_inv = modInverse(q, prime); 
		int ans = mult(p, q_inv, prime);
		cout<<"ans = "<<ans<<endl;
	 }
	 
	 return 0;			   		
}
