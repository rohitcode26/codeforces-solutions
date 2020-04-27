#include<bits/stdc++.h>
using namespace std ;
#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,L,R) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

void solve(int testcase)
{
	int n , i ;
	cin>>n ;
	Fi(i , 1 , n )
	{
		string s ;
		cin>>s ;
		if (s.size() > 10)
		{
			cout<<s[0]<<s.size()-2<<s[s.size()-1]<<'\n' ;
		}
		else 
		  cout<<s<<'\n' ;
	}
}

int main()
{
	fast 
	int t = 1 ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
