#include<iostream>
using namespace std;

long long int steps(int n, bool third)
{
	if(n == 0)
	    return 1;
    if(n < 0)
	    return 0;
	if(third)
		return steps(n-3, false) + steps(n-1, true) + steps(n-2, true); 
	else
	    return steps(n-1, false) + steps(n-2, false);	   
}

int main()
{
	int n;
	cin>>n;
	long long res;
	res = steps(n, true);
	cout<<res<<endl;
	res = res%1000000009;
	cout<<res;

	return 0;
}
