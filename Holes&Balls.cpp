#include<iostream>
using namespace std;

int main()
{
	int H, B;
	int i, j, index = 0, ctr = 0;
	long long int dH[H+1], dB[B+1], strength[H+1];
	
	cin>>H;
	for(i = 0; i < H; i++)
	{
		cin>>dH[i];
		strength[i] = i + 1;
	}
	
	cin>>B;
	for(i = 0; i < B; i++)
	{
		cin>>dB[i];
	}
	
	for(i = 0; i < B; i++)
	{
		ctr = 0;		
		for(j = H-1; j >= 0; j--)
		{
			if(dB[i] <= dH[j] && strength[j] != 0)
			{
				cout<<(j+1)<<" ";
				strength[j]--;
				ctr = 1;
				break;
			}
		}
		if(ctr == 0)
		    cout<<"0"<<" ";	 	
	}
	
	
	
	return 0;
}
