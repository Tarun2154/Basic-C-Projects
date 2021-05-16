#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int P;
	float L, time;
	cin>>P>>L;
	float pr = float(P);
	time = (pr/360.00)*L*60;
	int h = (int)time/60;
	int m = (int)time - (h*60);
	float H = h%12;
	float M = m;
	float angle = (11.0/2.0)*M - (30.0*H);
	if(angle < 0)
	{
		cout<<fixed<<setprecision(2)<<angle+360;
	}
	else
    {
    	cout<<fixed<<setprecision(2)<<angle;
	}
		
	return 0;
}
