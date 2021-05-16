#include<iostream>
using namespace std;
int main()
{
	int i, n, m=0, flag=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			cout<<"Number is not prime"<<endl;
			flag = 1;
			break;
		}	
	}
	if(flag==0)
		cout<<"Number is prime"<<endl;
		return 0;
}
