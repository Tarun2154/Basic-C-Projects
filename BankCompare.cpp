#include<iostream>
#include <cmath>

using namespace std;

int emi(double A, int interest, int years)
{
	double emi, a, b;
	a = A * interest;
	b = pow((1 + interest), (12 * years));
	emi = a/(1-1/b);
	return emi;
}

int main()
{
	int T, n, i, k, l = 0;
	double PA, sum, interest, years, temp, bank[2];
	
	cin>>PA;
	cin>>T;
		
	for(i = 0; i < 2; i++)
	{
		cin>>n; //here n = number of slabs
		sum = 0;
		for(k = 0; k < n; k++)
		{
			cin>>years;
		    cin>>interest;
		    temp = emi(PA, interest, years);
		    sum = sum + temp;
		}	
		bank[l++] = sum;
	}
	
	if(bank[0] < bank[1])
	    cout<<"Bank A, Rate : "<<bank[0];
	    
	else
	    cout<<"Bank B, Rate : "<<bank[1]; 
		
	return 0;	   
}
	
	
