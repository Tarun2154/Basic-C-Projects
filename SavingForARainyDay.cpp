#include <bits/stdc++.h>
using namespace std;

int main()
{
	int M, T;
	float R, I, ra, pa;

	cin>>M>>T>>R;
	
	if(M <= 0 || T <= 0 || R <= 0)
	{
		return 0;
	}
	
	else
	{
		ra = M;
		
		for(int i = T; i > 0; i--)
	    {
	    	pa = ra/(1+R/(float)1200);
	    	I = ra - pa;
	    	ra = ra + (M - I);
		}
		
		ra = ra - M;
		double fa = ceil(ra - 0.5);
		
		if(fa > ra)
		{
			fa = ceil(ra);
		}
		
		else
		{
			fa = floor(ra);
		}
		cout<<fa;
	}
	
	return 0;
}
