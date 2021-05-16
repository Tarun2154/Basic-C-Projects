#include<iostream>
using namespace std;
bool check(int arr[], int n)
{
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			flag=true;
			break;
		}
	}return flag;
}
int main()
{
	int arr[] ={1,3,5,7,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(check(arr,n))
	   cout<<"Yes, there are even numbers in this array"<<endl;
	else
	   cout<<"No even numbers in this array"<<endl;   
}
