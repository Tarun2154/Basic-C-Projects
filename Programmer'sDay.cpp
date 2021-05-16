#include<bits/stdc++.h>
using namespace std;

void getDate(int year)
{
	int day, month, sum = 256;
    int daySumL = 244, daySumN = 243;
    if(year == 1918)
    {
        day = sum - 229;
        month = 9;
    }
    else
    {
        if(year%4 == 0)
        {
            day = sum - daySumL;
            month = 9;
        }
        else
        {
            day = sum - daySumN;
            month = 9;
        }
    }
    cout<<day<<"."<<"0"<<month<<"."<<year;
}

int main()
{
	int year;
	cin>>year;
	getDate(year);
	return 0;
}
