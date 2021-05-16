#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int N, M;
	cin>>N>>M;
	
	int i, j, indexI, indexJ;
	int A[N][M];
	int Q[N][M], count, Max = 0, sum1, sum2;
	
	for(i= 1; i <= N; i++)
	{
		for(j = 1; j <= M; j++)
		{   
			cin>>A[i][j];
			Q[i][j] = 0;  
		}
	}
	
	for(i= 1; i <= N; i++)
	{
		for(j = 1; j <= M; j++)
		{
		    count = 0;
		    
			if(i == 1 && j == 1)
			    continue;
				
			if(A[i][j] == 1)
			{
				if(A[i-1][j-1] == 1)
				{
					count++;
					Q[i][j] = count;
				}
				
				if(A[i-1][j] == 1)
				{
					count++;
					Q[i][j] = count;
				}
				
				if(A[i-1][j+1] == 1)
				{
					count++;
					Q[i][j] = count;
				}
				
				if(A[i][j-1] == 1)
				{
					count++;
					Q[i][j] = count;
				}
				
				if(A[i][j+1] == 1)
				{
					count++;
					Q[i][j] = count;
				}
				
				if(A[i+1][j-1] == 1)
				{
					count++;
					Q[i][j] = count;
				}
				
				if(A[i+1][j] == 1)
				{
					count++;
					Q[i][j] = count;
				}
				
				if(A[i+1][j+1] == 1)
				{
					count++;
					Q[i][j] = count;
				}
			}	 
			
		}
	}
	
	for(i= 1; i <= N; i++)
	{
		for(j = 1; j <= M; j++)
		{   
			if(Q[i][j] > Max)
			{
				Max = Q[i][j];
				indexI = i;
				indexJ = j;
			}
		}
	}
	
	sum1 = (indexI-1)+(indexJ-1);
	
	for(i= 1; i <= N; i++)
	{
		for(j = 1; j <= M; j++)
		{   
			if(Q[i][j] == Max)
			{
				sum2 = (i-1)+(j-1);
				if(sum1 > sum2)
				{
					indexI = i;
					indexJ = j;
				}

				else
				{
					break;
				}
			}
		}
	}
	
	cout<<indexI<<":"<<indexJ<<":"<<Max;
	
	return 0;
}
