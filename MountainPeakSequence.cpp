#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int N;
	int mod = (pow(10, 9) + 7);
	int s = 2, i;
	cin>>N;
	
	if(N > 2)
	{
		if(N == 3)
	    {
	    	cout<<s;
		}
		else
		{
			for(i = 1; i < N-2; i++)
			{
				s = (s*2 + 2)%mod;
			}
			cout<<s;
		}
	}
	else
	{
		cout<<"0";
	}
	
	
	
	return 0;
}
