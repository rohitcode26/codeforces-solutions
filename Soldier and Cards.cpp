#include<bits/stdc++.h>
 
using namespace std ;
 
typedef double D ;
typedef long long ll ;
typedef long double ld ;
typedef unsigned int ui ;
typedef unsigned long long ull ;
 
# define F first
# define S second
# define R return
# define C continue 
# define pb push_back 
# define pf push_front
# define mp make_pair
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp
 
# define vi vector <int>
# define vb vector <bool>
# define vll vector <ll>
# define vs vector <string>
 
# define vvi vector < vector < int > >
# define vvb vector < vector < bool > >
# define vvc vector < vector < char > >
# define vvll vector < vector < ll > >
# define vvd vector < vector < D > >
# define vvld vector < vector < ld > >
 
# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >
 
# define vpld vector < pld >
# define vpii vector < pii >
# define vpll vector < pll >
# define vpDD vector < pDD >
# define vvpii vector < vector < pii > >
 
# define Fi(i,L,R) for (int i = L ; i <= R ; i++)
# define Fd(i,R,L) for (int i = R ; i >= L ; i--)
# define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
#define inf INT_MAX
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve ()
{
	int n , k1 , k2 ;
	cin >> n ;
	
	deque <int> q1 , q2 ;
	
	cin >> k1 ;
	Fi(i , 0 , k1-1)
	{
		int temp ;
		cin >> temp ;
		q1.pb(temp) ;
	}
	    
	cin >> k2 ;
	Fi(i , 0 , k2-1)
	{
		int temp ;
		cin >> temp ;
		q2.pb(temp) ;
	}
	
	Fi(i , 1 , 1e6)
	{
		int u , v ;
		u = q1.front() ;
		v = q2.front() ;
		q1.pop_front() ;
		q2.pop_front() ;
		
		if (u > v)
		{
			q1.pb(v) ;
			q1.pb(u) ;
			if (q2.size() == 0)
			{
				cout << i << " 1" ;
				return ;
			}
		}
		else
		{
			q2.pb(u) ;
			q2.pb(v) ;
			if (q1.size() == 0)
			{
				cout << i << " 2" ;
				return ; 
			}
		}
	}
	
	cout << -1 ;
}
 
int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast ;
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve () ;
	return 0 ;
}
