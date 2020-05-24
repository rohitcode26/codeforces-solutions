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
# define vc vector <char>
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

const int dx[] = {-1 , 0 , 1 , 0} ;
const int dy[] = {0 , 1 , 0 , -1} ;
 
///////////////////////////////////////////////////////////////////////////////////////

ll pow(ll a , ll b , ll m) {
	ll ans = 1 ;
	while(b)
	{
		if (b&1) {
			ans = (ans*a) % m ;
		}
		b /= 2 ;
		a = (a*a) % m ;
	}
	return ans ;
}

bool isprime(ll n) {
    for (ll i = 2 ; i * i <= n ; ++i)
        if (n % i == 0) {
        	return false ;
		}
    return true;
}

ll gcd(ll a, ll b) {
    if (b == 0) {
    	return a ;
	}
    else {
    	return gcd (b , a % b) ;
	}
}

ll lcm(ll a, ll b) {
    return ((a / gcd(a , b)) * b) ;
}

///////////////////////////////////////////////////////////////////////////////////////

void solve (int test_case) {
	int n , a , b , c ;
	cin >> n >> a >> b >> c ;
	string s ;
	cin >> s ;
	int rk = 0 , pr = 0 , sc = 0 ;
	for (int i = 0 ; i < n ; ++i) {
		if (s[i] == 'R') ++rk ;
		if (s[i] == 'P') ++pr ;
		if (s[i] == 'S') ++sc ;
	}
	int diff = min(rk , b) + min(pr , c) + min(sc , a) ;
	if (2*diff < n) {
		cout << "NO\n" ;
		return ;
	}
	cout << "YES\n" ;
	vc ans (n) ;
	for (int i = 0 ; i < n ; ++i) {
		ans[i] = '-' ;
	}
	for (int i = 0 ; i < n ; ++i) {
		if (s[i] == 'R') {
			if (b > 0) {
				ans[i] = 'P' ;
				--b ;
			}
		}
		else if (s[i] == 'P') {
			if (c > 0) {
				ans[i] = 'S' ;
				--c ;
			}
		}
		else if (s[i] == 'S') {
			if (a > 0) {
				ans[i] = 'R' ;
				--a ;
			}
		}
	}
	for (int i = 0 ; i < n ; ++i) {
		if (ans[i] != '-') {
			cout << ans[i] ;
		} else {
			if (a > 0) {
				ans[i] = 'R' ;
				--a ;
			} else if (b > 0) {
				ans[i] = 'P' ;
				--b ;
			} else if (c > 0) {
				ans[i] = 'S' ;
				--c ;
			}
			cout << ans[i] ;
		}
	}
	cout << '\n' ;
}

int main() {
	FAST ;
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//#endif
	int tc = 1 ;
	cin >> tc ;
	while (tc--) {
		solve (tc) ;
	}
	return 0 ;
}
