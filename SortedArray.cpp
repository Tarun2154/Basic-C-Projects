#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5];
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Enter elements in array : "<<endl;
	for(int j = 0; j < 5; j++)
	{
		cin>>arr[j];
	}
	
	sort(arr, arr+n);
	
	cout<<"Sorted array : \n"<<endl;
	for(int i = 0; i < n; i++)
	   cout<< arr[i] << " ";
	
	return 0;   
}
