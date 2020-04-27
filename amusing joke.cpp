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
	string s1 , s2 , s3 ;
	cin >> s1 >> s2 >> s3 ;
	int l = s1.length() + s2.length() ;
	string s4 ;
	s4.resize (l) ;
	if (l != s3.length())
	{
		cout << "NO" ;
		return 0 ;
	}
	
	sort (s1.begin() , s1.end()) ;
	sort (s2.begin() , s2.end()) ;
	sort (s3.begin() , s3.end()) ;
	s4 = s1+s2 ;
	sort(s4.begin() , s4.end()) ;
	if (s4 == s3)
	   cout << "YES" ;
	else
	   cout << "NO" ;   
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
