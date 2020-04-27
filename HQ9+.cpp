#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i ;
	string s;
	cin>>s;
	for (i = 0 ; i < s.size() ; i++)
	{
	   if ((s[i] == 'H')||(s[i] == 'Q')||(s[i] == '9'))
	   {
	   	  cout<<"YES" ;
	   	  break ;
	   }
	}
	if (i == s.size())
	  cout<<"NO" ;
    return 0 ;
}
