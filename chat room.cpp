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
	string ans ;
	Fi(i , 0 , s.length()-1)
	{
		if (s[i] == 'h' && ans.size() == 0)
		   ans += s[i] ;
		else if (s[i] == 'e' && ans == "h")
		   ans += s[i] ;
		else if (s[i] == 'l' && ans == "he")
		   ans += s[i] ;
		else if (s[i] == 'l' && ans == "hel")
		   ans += s[i] ;
		else if (s[i] == 'o' && ans == "hell")
		   ans += s[i] ;
		else
		   continue ;
	}
	if (ans == "hello")
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
