#include<iostream>
using namespace std;

int sq(int i, int j)
{
	int count = 0;
	int total = i*j;
	while(i && j)
	{
		count++;
		if(i > j)
		{
			i = i - j;
		}
		else
		{
			j = j - i;
		}
	}
	
	return count;
}

int main()
{
	int minL, maxL, minW, maxW;
	int i, j;
	int count = 0;
		
	cin>>minL>>maxL>>minW>>maxW;
	
	for(i = minL; i <= maxL; i++)
	{
		for(j = minW; j <= maxW; j++)
		{
			count = count + sq(i, j);
		}
	}
	
	cout<<count;
	return 0;
}
