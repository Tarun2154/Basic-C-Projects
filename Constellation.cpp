#include<bits/stdc++.h>
using namespace std;

char checkStar(char A[2][2])
{
	int i, j;
	char temp;
	if(A[1][1] == '.' && A[1][3] == '.' && A[2][2] == '.' && A[3][2] == '.')
	{
		temp = 'A';
	}
	if(A[2][1] == '.' && A[2][3] == '.')
	{
		temp = 'I';
	}
	if(A[2][2] == '.')
	{
		temp = 'O';
	}
	if(A[2][2] == '.' && A[3][2] == '.')
	{
		temp = 'U';
	}
	
	return temp;
	
}

int main()
{
	int i, j, k;
	int N;
	cin>>N;
	char A[1000][1000];
	char temp[1000];
	int index = 0;
	
	for(i = 1; i <= 3; i++)
	{
		for(j = 1; j <= N; j++)
		{
			cin>>A[i][j];
		}
	}
	
	for(i = 1; i <= 3; i++)
	{
		for(j = 1; j <= j+2 ; j++)
		{
			if(checkStar(A) != '\0')
			{
				temp[index] = checkStar(A[i][j])
				index++;
			}
			else if(A[1][j] == '#'&& A[2][j] =='#' && A[3][j] == '#')
			{
			    temp[index] = '#';
			    index++;
			    j = j + 3;
			}
			else
			{
				j++;
			}
		}
	}
	
	for(i = 1; i <= 3; i++)
	{
		cout<<temp[i];
	}
	
	return 0;
}
