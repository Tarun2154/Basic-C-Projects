#include<iostream>
using namespace std;
int isPrime(int);

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
	bool prime;
	for(int n = 2; n < 100; n++)
	{
		prime = isPrime(n);
		if(prime == true)
		{
			cout<<n<<" ";
		}
	}
	return 0;
}


