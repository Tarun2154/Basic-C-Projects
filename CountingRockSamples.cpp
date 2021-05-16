#include<iostream>
using namespace std;

int main()
{
	int R1min, R1max, R2min, R2max, noR, samples;
	int Sample[20], S, i, j; 
	int index = 0, count1 = 0, count2 = 0;
	
	cin>>S>>noR;
	
	for(i = 0; i < S; i++)
	{
		
		cin>>samples;
		Sample[index] = samples;
		index++;
	}
	
	cin>>R1min;
	cin>>R1max;
	cin>>R2min;
	cin>>R2max;
	
	for(j = 0; j < index; j++)
	{
		if(Sample[j] >= R1min && Sample[j] <= R1max)
			count1++;
		
		if(Sample[j] >= R2min && Sample[j] <= R2max)
			count2++;			
	}
	
	cout<<count1<<" "<<count2;
	
	return 0;
}
