#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, j;
	string T;
	char text[1000];
	char str[100];
	
	string T;
	string S;
	
	getline(cin, T);
	getline(cin, S);
	
	cin.getline(text, 100000);
	cin.getline(str, 1000);
	
    int A[1000];
	int count = 0, index = 0;	
	int n = strlen(text);
	int m = strlen(str);
	
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			
			if(str[i] == text[j] && str[i+1] == text[j+1])
			{
				A[index] = 1;
				index++;
			}
			
			else if(i == 0)
			{
				if(str[i] == text[j])
				{
					A[index] = m;
					index++;
				}			
			}
			else if(i == m-1)
			{
				if(str[i] == text[j] && str[i-1] != text[j-1])
				{
					A[index] = m + 2;
					index++;
				}
			}
			else
			{
				if(str[i] == text[j])
				{
					A[index] = m + 2;
					index++;
				}
			}
			
			
			
		}
	}
	
	int sum = 0;
	
	for(i = 0; i < index; i++)
	{
		sum = sum + A[i];1
	}
	cout<<sum;
		
	return 0;
}
