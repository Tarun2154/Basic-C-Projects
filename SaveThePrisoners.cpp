#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t-- > 0)
	{
		int n, m, s;
		cin>>n>>m>>s;
		int last = ((m-1) + (s-1)) % n + 1;
		cout<<last<<endl;
	}
	return 0;
}

