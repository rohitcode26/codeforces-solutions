#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef long double ld ;
#define F first
#define S second
#define pb push_back 
#define mp make_pair
#define vi vector <int>
#define vb vector <bool>
#define vc vector <char>
#define vll vector <ll>
#define vs vector <string>
#define pll pair < ll , ll >
#define pld pair < ld , ld >
#define pii pair < int , int >
#define vpld vector < pld >
#define vpii vector < pii >
#define vpll vector < pll >
#define vvi vector < vector < int > >
#define vvll vector < vector < ll > >
#define vvld vector < vector < ld > >
#define vvb vector < vector < bool > >
#define vvpii vector < vector < pii > >
#define all(v) (v).begin() , (v).end()
#define allrev(v) (v).rbegin() , (v).rend()
#define dist(x1 , y1 , x2 , y2) sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1))
const int MOD = 1e9 + 7 ;
const int infi = INT_MAX ;
const ll infll = LLONG_MAX ;
const int dx4[] = {0 , -1 , 0 , 1} ;
const int dy4[] = {-1 , 0 , 1 , 0} ;
const int dx8[] = {-1 , -1 , -1 , 0 , 1 , 1 , 1 , 0} ;
const int dy8[] = {-1 , 0 , 1 , 1 , 1 , 0 , -1 , -1} ;
const ld PI = 3.1415926535897932384626 ;

//-----------------------------------------------------------------------------------------------

ll power(ll a , ll b) {
	ll ans = 1 ;
	while (b > 0) {
		if (b & 1) ans *= a ;
		a *= a ;
		b >>= 1 ;
	}
	return ans ;
}

ll pow_mod (ll a , ll b , ll m) {
	ll ans = 1 ;
	while (b > 0) {
		if (b & 1) ans = (ans*a) % m ;
		a = (a*a) % m ;
		b >>= 1 ;
	}
	return ans % m ;
}

bool isprime (ll num) {
    for (ll i = 2 ; i * i <= num ; ++i) {
		if (num % i == 0) return false ;
	}
    return true;
}

ll gcd (ll a, ll b) {
    if (b == 0) return a ;
	else return gcd (b , a % b) ;
}

ll lcm (ll a, ll b) {
    return ((a / gcd(a , b)) * b) ;
}

ll cel (ll x1, ll y1) {
    if ((x1) <= 0) return (x1) / (y1) ;
    return (((x1) / (y1)) + (((x1) % (y1)) != 0)) ;
}

/**
const int N = 1e6+1 ;
vector<bool> pr(N , 1) ;
void sieve() {
	pr[0] = 0 ;
	pr[1] = 0 ;
	for (ll i = 2 ; i*i <= N ; ++i) {
		if (pr[i]) {
			for (ll j = i*i ; j <= N ; j += i) {
				pr[j] = 0 ;
			}
		}
	}
}
**/

//-----------------------------------------------------------------------------------------------

vi Centroids(const vvi &g) {
    int n = g.size() ;
    vi centroid , sz(n) ;
    function<void (int , int)> dfs = [&](int node , int par) {
        sz[node] = 1 ;
        bool is_centroid = true ;
        for (auto i : g[node]) {
			if (i == par) continue ;
            dfs(i , node) ;
            sz[node] += sz[i] ;
            if (sz[i] > n/2) is_centroid = false ;
        }
        if (n - sz[node] > n / 2) is_centroid = false;
        if (is_centroid) centroid.push_back(node);
    } ;
    dfs(0 , -1) ;
    return centroid ;
}

void solve (int test_case) {
	int n ;
	cin >> n ;
	vvi g(n) ;
	for (int i = 1 ; i < n ; ++i) {
		int u , v ;
		cin >> u >> v ;
		--u ;
		--v ;
		g[u].pb(v) ;
		g[v].pb(u) ;
	}
	vi chk = Centroids(g) ;
	if ((int)chk.size() == 1) {
		cout << chk[0]+1 << " " << g[chk[0]][0]+1 << "\n" ;
		cout << chk[0]+1 << " " << g[chk[0]][0]+1 << "\n" ; 
	} else {
		int node1 = chk[0] ;
		int node2 = chk[1] ;
		int p1 = -1 ;
		for (int i = 0 ; i < (int)g[node2].size() ; ++i) {
			if (g[node2][i] == node1) {
				p1 = i ;
				break ;
			}
		}
		if (p1 == 0) {
			cout << node2+1 << " " << g[node2][1]+1 << "\n" ;
			cout << node1+1 << " " << g[node2][1]+1 << "\n" ;
		}
		else {
			cout << node2+1 << " " << g[node2][0]+1 << "\n" ;
			cout << node1+1 << " " << g[node2][0]+1 << "\n" ;
		}
	}
}

int main() {
	ios_base :: sync_with_stdio (false) ;
	cin.tie(0) ;
	cout.tie(0) ;
	int tc = 1 ;
	cin >> tc ;
	for (int t = 1 ; t <= tc ; ++t) {
		solve (t) ;
	}
	return 0 ;
}