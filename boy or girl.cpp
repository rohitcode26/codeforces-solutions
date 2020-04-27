#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int count = 1 , check;
	cin>>s;
	for (int i = 1 ; i < s.length() ; i++)
	{
		check = 0;
		for (int j = 0 ; j < i ; j++)
		{
			if (s[i] != s[j])
			  check++ ; 
		}
		if (check == i)
		  count++ ;
	}
	if (count %2 == 0)
	  cout<<"CHAT WITH HER!" ;
	else
	  cout<<"IGNORE HIM!" ;
	return 0;  
}
