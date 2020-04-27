#include<bits/stdc++.h>
using namespace std ;

int main()
{
	vector <long> v (5) ; 
	for (int i = 1 ; i < 5 ; i++)
	  cin >> v[i] ;
	long big = *max_element(v.begin(),v.end()) ;
	for (int i = 1 ; i < 5 ; i++)
	{
		v[i] = big - v[i] ;
		if (v[i] != 0)
		  cout << v[i] << ' ' ; 
	}
	return 0 ;
}
