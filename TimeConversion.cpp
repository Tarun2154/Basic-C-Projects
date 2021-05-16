#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    vector<string> result;
    string num1, num2, sum;
    string temp1 = "1", temp2 = "2";
    stringstream s_stream(s);

    
    for(int i = 0; i < s.length(); i++)
    {
    	num1 = s[0];
    	num2 = s[1];
    	if(s[i] == 'P')
    	{
    		if(s[1] == '8')
    		{
    			s[0] = '2';
    			s[1] = '0';
			}
			else if(s[1] == '9')
			{
				s[0] = '2';
				s[1] = '1';
			}
			else
			{
				int n = s[0];
				int m = s[1];
				n = n + 1;
				m = m + 2;
				s[0] = n;
				s[1] = m;
			}
			s.erase(7);
			break;
		}
		
		if(s[i] == 'A')
		{
			s.erase(7);
			break;
		}
	}
	return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

