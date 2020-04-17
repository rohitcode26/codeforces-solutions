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

int n , k ;
vi v ;
pair < int , pii > ans ;

bool check (int m)
{
	vi h(2) ;
	for (int i = 0 ; i < m ; ++i)
	    ++h[v[i]] ;
	if (h[0] <= k)
	{
		ans = {1 , {0 , m-1}} ;
		return true ;
	}
	for (int i = m ; i < n ; ++i)
	{
		--h[v[i-m]] ;
		++h[v[i]] ;
		if (h[0] <= k)
		{
			ans = {1 , {i-m+1 , i}} ;
			return true ;
		}
	}
	return false ;
}

void solve (int test_case)
{
	cin >> n >> k ;
	v = vi(n) ;
	for (int i = 0 ; i < n ; ++i)
	    cin >> v[i] ;
	int hi = n , lo = 0 ;
	int mid = (hi+lo)/2 ;
	while(lo <= hi)
	{
		mid = (hi+lo)/2 ;
		if (check(mid))
		    lo = mid + 1 ;
		else
		    hi = mid - 1 ;
	}
	cout << ans.S.S - ans.S.F + 1 << '\n' ;
	for(int i = 0 ; i < n ; ++i)
	{
		if(i >= ans.S.F && i <= ans.S.S)
		    cout << 1 << ' ' ;
		else
		    cout << v[i] << ' ' ;
	}
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
