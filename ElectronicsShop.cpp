#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int getMoneySpent(int kb[], int usb[], int n, int m, int b)
{
    int budget[1000];
    int closest[1000];
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            budget[index] = kb[i] + usb[j];
            index++;
        }
    }
    
    for(int i = 0; i < index; i++)
    {
        if(budget[i] <= b)
        {
            closest[i] = b - budget[i];
        }
        else
        {
            closest[i] = 1000000;
        }
        
    }
    
    int ans;
    int Min = *min_element(closest, closest + index);
    
    for(int i = 0; i < index; i++)
    {
        if(Min == 1000000)
        {
            ans = -1;
        }
        else
        {
            if(closest[i] == Min)
            {
                ans = budget[i];
            }
        }
    }
    
    return ans;
}

int main()
{
	int b, n, m;
	cin>>b>>n>>m;
	int kb[1000], usb[1000];
	for(int i = 0; i < n; i++)
	{
		cin>>kb[i];
	}
	for(int i = 0; i < m; i++)
	{
		cin>>usb[i];
	}
	int result = getMoneySpent(kb, usb, n, m, b);
	cout<<result;

    return 0;
}


