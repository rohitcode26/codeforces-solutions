#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i = 0 , count = 0 ;
	string s1 , s2 ;
	cin>>s1>>s2 ;
	for (i = 0 ; i < s1.size() ; i++)
	{
		if (isupper(s1[i]))
		  s1[i] = tolower(s1[i]);
		if (isupper(s2[i]))
		  s2[i] = tolower(s2[i]);
		if (s1[i] < s2[i])
		{
			cout<<-1 ;
			break ;
		}
		else if (s1[i] > s2[i])
		{
			cout<<1 ; 
			break ; 
		}
		else if (s1[i] == s2[i])
		{
			count++;  
			continue ;
		}
	}
	if (count == s1.size())
	  cout<<0 ;
	return 0 ;	
}
