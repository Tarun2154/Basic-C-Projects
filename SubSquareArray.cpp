#include <iostream>
#define R 6
#define C 5
#define bool int
using namespace std;
void printMaxSquare(bool M[R][C])
{
	int i,j;
	int S[R][C];
	int max_s, max_i, max_j;
	for(i = 0; i < R; i++)
	   S[i][0] = M[i][0];
	
	for(j = 0; j < C; j++)
	   S[0][j] = M[0][j];  
	   
	for(i = 1; i < R; i++)
	{
		for(j = 1; j < C; j++)
		{
			if(M[i][j] == 1)
			   S[i][j] = min(min(S[i-1][j], S[i][j-1]), S[i-1][j-1]) + 1;
			else
			   S[i][j] = 0;   
		}
	} 
	 
	max_s = S[0][0]; max_i = 0; max_j = 0;
	
	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(max_s < S[i][j])
			{
				max_s = S[i][j];
				cout<<"max_s = "<<S[i][j]<<endl;
				max_i = i;
				cout<<"max_i = "<<max_i<<endl;
				max_j = j;
				cout<<"max_j = "<<max_j<<endl;
			}
		}
    }
    cout<<"Max Size sub-matrix :\n";
    for(i = max_i; i > max_i - max_s; i--)
    {
    	for(j = max_j; j > max_j - max_s; j--)
    	{
    		cout<< M[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	bool M[R][C] = {{0,1,1,0,1},
	                {1,1,0,1,0},
					{0,1,1,1,0},
					{1,1,1,1,0},
					{1,1,1,1,1},
					{0,0,0,0,0}};
					
	printMaxSquare(M);				
}
