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

///////////////////////////////////////////////////////////////////////////////////////

void solve ()
{
	int n ;
	cin >> n ;
	
	vi v(8) ;
	
	Fi (i , 0 , n-1)
	{
		int temp ;
		cin >> temp ;
		
		v[temp]++ ;
	}
	
	if (v[5] > 0 || v[7] > 0)
	{
		cout << -1 ;
		return ;
	}
	
	int a , b , c ;
	
	a = v[4] ;
	v[1] -= a ;
	v[2] -= a ;
	v[4] -= a ;
	
	if (v[1] < v[6] || v[2] < 0 || v[2] + v[3] < v[6])
	{
		cout << -1 ;
		return ;
	}
	
	b = v[3] ;
	v[1] -= b ;
	v[3] -= b ;
	v[6] -= b ;
	
	c = v[1] ;
	v[1] -= c ;
	v[2] -= c ;
	v[6] -= c ;
	
	for(auto i : v)
	{
		if (i != 0)
		{
			cout << -1 ;
			return ;
		}
	}
	
	while (a--) cout << "1 2 4" << '\n' ;
	while (b--) cout << "1 3 6" << '\n' ;
	while (c--) cout << "1 2 6" << '\n' ;
}
 
int main()
{
	fast
	int t = 1 ;
//	cin>>t ;
	while (t--)
	  solve () ;
	return 0 ;
}
