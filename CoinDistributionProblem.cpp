#include<iostream>
using namespace std;

int main()
{
	int i, j, n, temp, sum;
	int count1 = 0, count2 = 0, count5 = 0;
	cin>>n;
	int mul2 = 2;
	int mul5 = 5;
	for(i = 1; i < n; i++)
	{
		if(mul5*i <= n)
		    count5++;
    }
	     
	temp = n - count5*mul5;
	
	for(i = 1; i < n; i++)
	{
		if(mul2*i <= temp)
		    count2++;
    } 
    
	temp = temp - count2*mul2;
	
	sum = count5 + count2 + temp;
    cout<<"Min Coins: "<<sum<<endl;
    cout<<"5's coins : "<<count5<<endl;
    cout<<"2's coins : "<<count2<<endl;
	cout<<"1's coins : "<<temp<<endl; 

	return 0;
}
