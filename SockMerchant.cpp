#include <bits/stdc++.h>

using namespace std;

int Delete(int arr[], int n, int x) 
{ 
   int i; 
   for (i=0; i<n; i++) 
      if (arr[i] == x) 
         break; 
  
   if (i < n) 
   { 
     n = n - 1; 
     for (int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
} 

int getPairs(int ar[], int n) {
    int count = 0, it, jt;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
        	if(i < j)
        	{
        		if(ar[i] == ar[j])
        		{
        			Delete(ar, n, ar[i]);
        			Delete(ar, n, ar[j]);
				}
			}
        
        }
    }
    
    return count;
}

int main()
{
	int n;
	cin>>n;
	int ar[100];
	for(int i = 0 ; i < n; i++)
	{
		cin>>ar[i];
	}
	
	int ans = getPairs(ar, n);
	cout<<ans;
	
	return 0;
}
   

