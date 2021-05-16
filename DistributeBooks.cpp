#include<iostream> 
using namespace std;

long long int subfact(long int n)
{
	long long int a[n+1];
	a[0] = 1;
	a[1] = 0;
	a[2] = 1;
	for(long long int i = 3; i <= n; i++)
	{
		a[i] = (i-1) * (a[i - 1] + a[i - 2]) % 1000000007;
	}
	return a[n];
}

int main() 
{
	long long int n;
	int ans;
	cin>>n;
	cout<<subfact(n);
	return 0;
}
