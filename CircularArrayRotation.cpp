#include<bits/stdc++.h>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();
    int m = queries.size();
    vector<int> aux(m);
    
    for (int j = 0; j < k; j++)
    {
        int temp = a[n-1];

        for (int i = n-1; i > 0; i--)
            a[i] = a[i - 1];

        a[0] = temp;
    }

    for(int i = 0; i < queries.size(); i++)
    {
        aux[i] = a[queries[i]];
    }
    return aux;
}

int main()
{
	int n, k, q;
	cin>>n>>k>>q;
	
	vector<int> a(n);
	vector<int> queries(q);
	
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	
	for(int i = 0; i < q; i++)
	{
		cin>>queries[i];
	}
	
	vector<int> result = circularArrayRotation(a, k, queries);
	
	
	for(int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<endl;
	}
	
	return 0;
}
