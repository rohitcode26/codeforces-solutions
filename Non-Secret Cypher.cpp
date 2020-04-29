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

# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))

# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
const ll MOD = 1e9 + 7 ;
const int infi =  INT_MAX ;
const ll infll =  LLONG_MAX ;
const ld PI = 3.1415926535897932384626 ;
 
///////////////////////////////////////////////////////////////////////////////////////

void solve (int test_case){
	int n , k ;
	cin >> n >> k ;
	vi a (n+1) ;
	for (int i = 1 ; i <= n ; ++i) cin >> a[i] ;
	map <int , int> m ;
	ll ans = 0 ;
	for (int i = 1 , j = 1 ; i <= n ; ++i){
		while (j <= n && m[a[j-1]] != k){
			//increasing window from right ;
			++m[a[j]] ;
			++j ;
			//cout << '\n' ;
			//cout << "j-1 : " << j-1 << "    j : " << j ;
		}
		if (m[a[j-1]] == k){
			ans += (ll)(n - j + 2) ;
			//cout << "     ans : " << ans << '\n' ;
		}
		// decreasing window from left ;
		--m[a[i]] ;
	}
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
