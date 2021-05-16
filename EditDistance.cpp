#include<iostream>
#include<string.h>
using namespace std;
int ed(char *X, char *Y, int m, int n)
{
	int A[m+1][n+1];
	int i, j;
	for(i = 0; i <= m; i++)
	{
		for(j = 0; j <= n; j++)
		{
			if(i == 0)
			   A[i][j] = i;
			
			else if(j == 0)
			   A[i][j] = j;   
			
			else if(X[i] == Y[j])
			   A[i][j] = A[i-1][j-1];
			 
			else
			   A[i][j] = 1 + min(A[i-1][j-1], min(A[i-1][j], A[i][j-1]));   
		}
	}
	return A[m][n];
	
}
int main()
{
	char X[] = "abcdef";
	char Y[] = "azced";
	int m = strlen(X);
	int n = strlen(Y);
	cout<<"Minimum Edit Distance = "<<ed(X, Y, m, n);
	return 0;
}
