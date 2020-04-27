#include<bits/stdc++.h>

using namespace std ;

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
	int len = s.length() ;
	int i , count = 0 ;
	Fi(i , 0 , len-1)
	{
		if (isupper(s[i]))
		   count++ ;	   
	}
	if (count == len)
	{
		Fi(i , 0 , len-1)
		   s[i] = tolower(s[i]) ;
		cout<< s ;   
	}
	else if (count == len-1  && islower(s[0]))
	{
		s[0] = toupper(s[0]) ;
		Fi(i , 1 , len-1)
		   s[i] = tolower(s[i]) ;
	    cout << s ;
	}
	else
	{
		cout << s ;
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
