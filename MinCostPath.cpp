#include<iostream>
#define R 3
#define C 3
using namespace std;
int minCost(int Cost[R][C])
{
	int T[R][C];
	int i, j;
	T[0][0] = Cost[0][0];
	for(i = 1; i < R; i++)
	{
		T[i][0] = T[i-1][0] + Cost[i][0];
	}
	
	for(j = 1; j < C; j++)
	{
		T[0][j] = T[0][j-1] + Cost[0][j];
	}
	
	for(i = 1; i < R; i++)
	{
		for(j = 1; j < C; j++)
		{
			T[i][j] = min(T[i-1][j-1], min(T[i-1][j], T[i][j-1])) + Cost[i][j];
		}
	}
	return T[R-1][C-1];
}

int main()
{
	int Cost[R][C] = {{1, 2, 3},  
	                  {4, 8, 2},  
                      {1, 5, 3}};
    cout<<"Minimum Cost = "<<minCost(Cost); 
	return 0;          
}
