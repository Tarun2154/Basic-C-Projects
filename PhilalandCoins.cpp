#include<iostream>
using namespace std;

int main()
{
	int a[100], T, k = 1;
	cin>>T;
	for(int j = 1; j <= T; j++)
	{
		int i, n, temp = 0, sum = 0; 
    	int count1 = 0, count2 = 0, count3 = 0;
		
	    cin>>n;
	    
	    for(i = 1; i <= n; i++)
	    {
		    if(3*i <= n)
		       count3++; 
	    } 
	
	    temp = n - count3*3;
	
	    for(i = 1; i <= temp; i++)
	    {
		    if(2*i <= temp)
		       count2++;
	    }
	
	    temp = temp - count2*2;
	    count1 = temp;
	    sum = count3 + count2 + count1;
	    a[k] = sum;
	    k++; 
	}
	
	for(int i = 1; i < k; i++)
	    cout<<a[i]<<endl;
	
	return 0;
}
