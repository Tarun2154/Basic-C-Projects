#include<iostream>
using namespace std;

int getUgly(int n)
{
	int uglyNum[n];
	int i2=0, i3=0, i5=0;
	int next = 1;
	int next2mul = 2;
    int next3mul = 3;	
	int next5mul = 5;
	uglyNum[0] = 1;
	
   	for(int i = 1; i < n; i++)
	{
		next = min(next2mul, min(next3mul, next5mul));
		uglyNum[i] = next;
		
		if(next == next2mul)
		{
		  i2++;
		  next2mul = uglyNum[i2]*2;
	    }
		
		if(next == next3mul)
		{
		  i3++;
		  next3mul = uglyNum[i3]*3; 
	    }
		
		if(next == next5mul)
		{
		    i5++;
		    next5mul = uglyNum[i5]*5;   
		}
	}
	return next;
	
}

int main()
{
	int n;
	cout<<"enter a number:"<<endl;
	cin>>n;
	cout<<"Ugly number : "<<getUgly(n);
	return 0;
}
