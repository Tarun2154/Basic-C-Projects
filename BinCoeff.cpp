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
	int n, r;
	cout<<"Enter two numbers :"<<endl;
	cin>>n>>r;
	cout<<"Binomial Coefficient of C("<<n<<","<<r<<") = "<<binomial(n,r);
}
