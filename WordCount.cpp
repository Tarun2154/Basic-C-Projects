#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[1000];
	int count = 0, i;
	gets(str);
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		    count++;
		    
	}
	cout<<"Word Count : "<<count + 1;

	return 0;
}
