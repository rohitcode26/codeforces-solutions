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
 
///////////////////////////////////////////////////////////////////////////////////////

int n , m ;
vll a , b ;

ll calc(ll k){
	ll ans = 0 ;
	for (int i = 0 ; i < n ; ++i){
		if (a[i] < k){
			ans += (k - a[i]) ;
		}
	}
	for (int i = 0 ; i < m ; ++i){
		if (b[i] > k){
			ans += (b[i] - k) ;
		}
	}
	return ans ;
}

void solve (int test_case){
	cin >> n >> m ;
	a = vll(n) ;
	b = vll(m) ;
	for (int i = 0 ; i < n ; ++i){
		cin >> a[i] ;
	}
	for (int i = 0 ; i < m ; ++i){
		cin >> b[i] ;
	}
	ll ans = LLONG_MAX ;
	ll lo = 0 ; 
	ll hi = 2e9 ;
	int cnt = 0 ;
	while (hi - lo >= 3)
	{
		ll m1 = lo + (hi-lo)/3 ;
		ll m2 = hi - (hi-lo)/3 ;
		ll s1 = calc(m1) ;
		ll s2 = calc(m2) ;
		if (s1 > s2){
			lo = m1 ;
			ans = min(ans , s1) ;
		} else{
			hi = m2 ;
			ans = min(ans , s2) ;
		}
	}
	ans = min({ans , calc(lo+1) , calc(lo+2)}) ;
	cout << ans ;
}
 
int main(){
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	FAST ;
	int tc = 1 ;
//	cin >> tc ;
	while (tc--) 
	    solve (tc) ;
	return 0 ;
}
