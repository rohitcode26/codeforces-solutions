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

vi p ;

int fnd(int nd) {
	if (p[nd] < 0) {
		return nd ;
	}
	p[nd] = fnd(p[nd]) ;
	return p[nd] ;
}

void join(int a , int b) {
	int p1 = fnd(a) ;
	int p2 = fnd(b) ;
	if (p1 == p2) {
		return ;
	}
	if (p[p1] > p[p2]) {
		swap(p1 , p2) ;
	}
	p[p1] += p[p2] ;
	p[p2] = p1 ;
}

void solve (int test_case) {
	int n , m ;
	cin >> n >> m ;
	if (m == 0) {
		for (int i = 1 ; i <= n ; i += 3) {
			cout << i << ' ' << i+1 << ' ' << i+2 << ' ' ;
		}
		return ;
	}
	p = vi(n , -1) ;
	for (int i = 0 ; i < m ; ++i) {
		int a , b ;
		cin >> a >> b ;
		--a ;
		--b ;
		join(a , b) ;
	}
	map < int , vi > trip ;
	map < int , vi > doub ;
	vi sing ;
	for (int i = 0 ; i < n ; ++i) {
		if (p[i] < -3) 
		{
			cout << -1 ;
			return ;
		}
		int par = fnd(i) ;
		if (p[par] == -3 && par != i) {
			trip[par].pb(i) ;
			continue ;
		}
		if (p[par] == -2 && par != i) {
			doub[par].pb(i) ;
			continue ;
		}
		if (p[par] == -1) {
			sing.pb(i) ;
			continue ;
		}
	}
	int sztrip = trip.size() ;
	int szdoub = doub.size() ;
	int szsing = sing.size() ;
	if (szdoub > szsing) {
		cout << -1 ;
		return ;
	}
	if ((szdoub - szsing) % 3) {
		cout << -1 ;
		return ;
	}
	for (auto &i : doub) {
		doub[i.F].pb(sing.back()) ;
		sing.pop_back() ;
	}
	szsing = sing.size() ;
	for (int i = 0 ; i < szsing ; i += 3) {
		trip[sing[i]].pb(sing[i+1]) ;
		trip[sing[i]].pb(sing[i+2]) ;
	}
	for (auto &i : trip) {
		cout << i.F+1 << ' ' << i.S[0]+1 << ' ' << i.S[1]+1 << '\n' ;
	}
	for (auto &i : doub) {
		cout << i.F+1 << ' ' << i.S[0]+1 << ' ' << i.S[1]+1 << '\n' ;
	}
}

int main() {
	FAST ;
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//#endif
	int tc = 1 ;
//	cin >> tc ;
	while (tc--) {
		solve (tc) ;
	}
	return 0 ;
}
