#include<iostream>
using namespace std;

int main()
{
	int F, B, T, D;
	cin>>F>>B>>T>>D;
	
	int i, j;
	int countB = 0;
	int countF = 0;
	int park = D;
	
	for(i = 0; i < D; i++)
	{
		park = park - B;
		countB++;
		if(park <= 0)
		   break;
		park = park + F;
		countF++;		
	}
	
	int time = T*((B*countB) + (F*countF) + park);
	cout<<time;
	
	return 0;
}
