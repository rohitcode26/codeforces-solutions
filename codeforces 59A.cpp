#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int countlower = 0, countupper = 0;
	cin>>str;
	for (int i=0; i<str.length(); i++)
	if (islower(str[i]))
	  countlower++;
	else
	  countupper++;
	
	for (int i=0; i<str.length(); i++)
	{
	
		if (countlower >= countupper)
	    {
		  str[i] = tolower(str[i]);
	    }
	    else 
	      str[i] = toupper(str[i]);
    }
    cout<<str;
	return 0;
}

