#include<iostream>
using namespace std;

int main()
{
	int M, N, X, Y;
	cin>>M>>N>>X>>Y;
	
	if(M < 3 || M >= 20)
	{
		return 0;
	}
	
	if(N < 3 || N >= 20)
	{
		return 0;
	}
	
	char A[20][20];
	int i, j;
	
	for(i = 1; i <= M; i++)
	{
		for(j = 1; j<= N; j++)
		{
			cin>>A[i][j];
		}
	}
	
	int count = 1;
	
	for(i = 1; i <= M; i++)
	{
		for(j = 1; j<= N; j++)
		{
			if(A[i][j] == 'T')
			{
				
				if(A[i-1][j-1] == 'T' || A[i-1][j] == 'T' || A[i-1][j+1] == 'T' || A[i][j-1] == 'T' || A[i][j+1] == 'T'|| A[i+1][j-1] == 'T'|| A[i+1][j] == 'T'|| A[i+1][j+1] == 'T')
				{
					count++;
					cout<<i<<","<<j<<"  count = "<<count<<endl;
					A[i][j] = 'W';
				}
				else
				{
					break;
				}
			}
		}
	}
	
	cout<<count;

	
	return 0;
}
