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
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp
 
# define Fi(i,L,R) for (int i = L ; i <= R ; i++)
# define Fd(i,R,L) for (int i = R ; i >= L ; i--)

# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
const ll MOD = 1e9 + 7 ;
const int infi =  INT_MAX ;
const ll infll =  LLONG_MAX ;
const ld PI = 3.1415926535897932384626 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve (int test_case)
{
	int n , k ;
	cin >> n >> k ;
	vi v (n) ;
	for (auto &i : v)
	    cin >> i ;
	vi diff (2*k+10 , 0) , cnt (2*k+1 , 0) ;
	for (int i = 0 ; i < n/2 ; ++i)
	{
		++cnt[v[i] + v[n-1-i]] ;
		++diff[min(v[i] , v[n-1-i]) + 1] ;
		--diff[max(v[i] , v[n-1-i]) + k + 1] ;
	}
	int res = infi ;
	for (int i = 1 ; i < 2*k + 10 ; ++i)
		diff[i] += diff[i-1] ;
	for (int i = 0 ; i < 2*k+1 ; ++i)
	    res = min(res , diff[i] - cnt[i] + (n/2 - diff[i])*2) ;
	cout << res << '\n' ;
}
 
int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	
	FAST ;
	int tc = 1 ;
	cin >> tc ;
	while (tc--) 
	    solve (tc) ;
	return 0 ;
}
