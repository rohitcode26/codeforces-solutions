#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int count1 = 0 , count2 = 0 , count3 = 0 , i ;
	cin>>s; 
	for (i = 0 ; i < s.length() ; i+=2)
	{
		if (s[i] == '1')
		  count1++;
		if (s[i] == '2')
		  count2++;
		if (s[i] == '3')
		  count3++;      
	}
	for (i = 0 ; i < 2*count1 ; i+=2)
	  s[i] = '1' ; 
	for (i = 2*count1 ; i < 2*count1+2*count2 ; i+=2)
	  s[i] = '2' ;
	for (i = 2*count1+2*count2 ; i < s.length() ; i+=2)
	  s[i] = '3';
	cout<<s;
	return 0;   
}
