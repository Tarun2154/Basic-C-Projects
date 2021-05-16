#include<iostream>
using namespace std;

void printMax(int arr[], int n, int k)
{
	int j, max;
	for(int a = 0; a <=n-k; a++)
	{
		max = arr[a];
		for(j = 1; j < k; j++)
		{
			if(arr[a+j] > max)
			   max = arr[a+j];
		}
		cout<< max <<" ";
	}
}

int main()
{
	int k, n;
	int arr[9];
	cout<<"Enter elements of array : "<<endl;
	for(int i = 0; i < 9; i++)
	{
		cin>>arr[i];
	}
    n = sizeof(arr)/sizeof(arr[0]);
	cout<<"enter the size of window : "<<endl;
	cin>>k;
	printMax(arr, n, k);
	return 0;
}
