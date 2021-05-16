#include<bits/stdc++.h>
using namespace std;

void getScores(int A[], int n)
{
	int max = A[0], min = A[0];
    int countMax = 0, countMin = 0;
    for(int i = 0; i < n; i++)
    {
        if(max < A[i])
        {
            max = A[i];
            countMax++;
        }
        if(min > A[i])
        {
            min = A[i];
            countMin++;
        }
    }
    cout<<countMax<<" "<<countMin; 
}

int main()
{
	int n;
	cin>>n;
	int A[1000];
	for(int i = 0; i < n; i++)
	{
		cin>>A[i];
	}
	
	getScores(A, n);
	
	return 0;
}
