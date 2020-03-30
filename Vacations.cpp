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
	int n ;
	cin >> n ;
	
	vi v(n) ;
	
	Fi(i , 0 , n-1)
	    cin >> v[i] ;
	
	vvi dp (n , vi (3)) ;
	
	Fi(i , 0 , n-1)
	{
		Fi(j , 0 , 2)
		{
			dp[i][j] = inf ;
		}
	}
	
	dp[0][0] = 1 ;
	
	if(v[0] == 1 || v[0] == 3)
	{
		dp[0][1] = 0 ;
	}
	
	if (v[0] == 2 || v[0] == 3)
	{
		dp[0][2] = 0 ;
	}
	
	
	Fi(i , 1 , n-1)
	{
		dp[i][0] = 1 + min(dp[i-1][0] , min(dp[i-1][1] , dp[i-1][2])) ;
		
		if (v[i] == 3 || v[i] == 1)
		{
			dp[i][1] = min(dp[i-1][0] , dp[i-1][2]) ;
		}
		if (v[i] == 3 || v[i] == 2)
		{
			dp[i][2] = min(dp[i-1][0] , dp[i-1][1]) ;
		}
	}
	
	cout << min (dp[n-1][0] , min(dp[n-1][1] , dp[n-1][2])) ;
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
