#include<bits/stdc++.h>

using namespace std ;

typedef long long int ll ;
typedef long double ld ;

#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mod1 1000000007

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vs vector <string>
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,R,L) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int solve (int testcase)
{
	string s ;
	cin >> s ;
	int len = s.length() , odd = 0 ;
	vi bucket (26) ;
	Fi(i , 0 , len-1)
	   ++bucket[s[i] - 'a'] ;
	Fi(i , 0 , 25)
	{
		if (bucket[i] % 2)
		   ++odd ;
	}
	if (odd <= 1)
	   cout << "First" ;
	else
	{
		if (odd % 2)
		   cout << "First" ;
		else
		   cout << "Second" ;
	}	
}

int main()
{
	fast 
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
