#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N, T, i, j, temp;
	
	cin>>N>>T;
	
	vector < vector<int> > A(N);
    vector <int > S(N);
    vector <int > W(T);
    vector <int > count(N);
	
	for(i = 0; i < N; i++)
	{
		A[i] = vector<int> (T);
		for(j = 0; j < T; j++)
		{
			cin>>temp;
			A[i][j] = temp;
		}
		cin>>S[i];	
	}
	
	for(i = 0; i < N; i++)
	{
		count[i] = 0;
		A[i][0] = S[i]*(A[i][0]);
	}
	
	for(i = 0; i < N; i++)
	{
		for(j = 1; j < T; j++)
		{
			A[i][j] = A[i][j-1] + S[i]*(A[i][j]);
		}
	}
	
	for(j = 1; j < T-1; j = j + 2)
	{
		int max = A[0][j];
		
		for(i = 1; i < N; i++)
		{
			if(max < A[i][j])
			    max = A[i][j];
		}
		
		W[j] = max;
	}
	
	for(j = 1; j < T-1; j = j + 2)
	{
		for(i = 0; i < N; i++)
		{
			if(A[i][j] >= W[j])
			    count[i]++;
		}
	}
	
	int index = 0;
	
	for(i = 1; i < N; i++)
	{
		if(count[i] > count[index])
		    index = i;
	}
	
	int ans = index + 1;
	cout<<ans;
	
	return 0;
}
