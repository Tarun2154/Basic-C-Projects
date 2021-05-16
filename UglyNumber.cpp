#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, x=0;
	cout<<"Enter a number "<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"enter a valid number"<<endl;
	}
	while(n!=1)
	{
	
       if(n%5==0)
     	{
	    	n = n/5;
	    }
	   else if(n%3 == 0)
	    {
		    n = n/3;
	    }
	   else if(n%2 == 0)
	    {
		    n = n/2;
	    }
	   else
	    {
		    cout<<"It is not an Ugly number"<<endl;
		    x =1;
		    break;
	    }
    }
      if(x==0)
  {
  	cout<<"It is an Ugly number"<<endl;
  }
}
