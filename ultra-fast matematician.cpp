#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s, ss, sss;
	cin>>s>>ss;
	sss.resize(s.length());
	for (int i = 0 ; i < s.length() ; i++)
	{
		if (((s[i] == '1')&&(ss[i] == '0'))||((s[i] == '0')&&(ss[i] == '1')))
		  sss[i] = '1';
		else 
		  sss[i] = '0';  
	}
	cout<<sss;
	return 0;
}
