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

const int N=1e5+5;

int n ;
vi a(N) ;
vi v[N];

bool check(int k)
{
	for (int i = 0 ; i < k ; ++i)
	    v[i].clear() ;
	int cur = 0 ;
	for (int i = 1 ; i <= n ; ++i)
	{
		v[cur].pb(a[i]) ;
		++cur ;
		cur %= k ;
	}
	for (int i = 0 ; i < k ; ++i)
	{
		int tp = v[i].size() ;
		for (auto it : v[i])
		{
			--tp ;
			if (it < tp)
			    return false ;
		}
	}
	return true ;
}

int bin_srch(int lo , int hi)
{
	while (lo < hi)
	{
		int mid = (lo+hi) >> 1 ;
		if (check(mid))
		    hi = mid ;
		else
		    lo = mid + 1 ;
	}
	return lo ;
}

void solve (int test_case)
{
	cin >> n ;
	for (int i = 1 ; i <= n ; ++i)
	    cin >> a[i] ;
	sort(a.begin() + 1 , a.begin() + n + 1) ;
	reverse(a.begin() + 1 , a.begin() + n + 1) ;
	cout << bin_srch(1 , n) ;
}

int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	
	FAST ;
	int tc = 1 ;
//	cin >> tc ;
	while (tc--) 
	    solve (tc) ;
	return 0 ;
}
