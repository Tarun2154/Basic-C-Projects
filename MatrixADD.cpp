#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,a[100][100], b[100][100], sum[100][100];
	cout<<"No. of Rows : "<<endl;
	cin>>r;
	cout<<"No. of Coloumns : "<<endl;
	cin>>c;
	cout<<endl<<"Enter elements of 1st Matrix :"<<endl;
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			cout << "Enter element a(" << i + 1 << j + 1 << "): ";
			cin>>a[i][j];
		}
	}
	
	cout<<endl<<"Enter elements of 2nd Matrix:"<<endl;
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			cout << "Enter element a(" << i + 1 << j + 1 << "): ";
			cin>>b[i][j];
		}
	}
	
	for(i=0;i<r;++i)
	  for(j=0;j<c;j++)
	     sum[i][j] = a[i][j] + b[i][j];  
	  	
	cout<<endl<<"Sum of Matrix is :"<<endl;
	for(i=0;i<r;++i)
	  for(j=0;j<c;j++)
	  {
	  	cout<<sum[i][j]<<" ";
	  	if(j==c -1)
	  	 cout<<endl;
	  }  
	
	return 0;  
}
