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

long long ways = 0 ;

void solve (int test_case) {
	string org , dr ;
	cin >> org >> dr ;
	int net1 = 0 , net2 = 0 , ques = 0 ;
	cout << fixed << setprecision(12) ;
	for (int i = 0 ; i < org.length() ; ++i) {
		net1 += (org[i] == '+' ? 1 : -1) ;
	}
	for (int i = 0 ; i < dr.length() ; ++i) {
		if (dr[i] == '?') ++ ques ;
		else net2 += (dr[i] == '+' ? 1 : -1) ;
	}
	int diff = net1 - net2 ;
	double ans ;
	if ((diff + ques) % 2 != 0 || ques < abs(diff)) {
		cout << double(0) ;
		return ;
	}
	int c = 1 ;
	int m = (ques + abs(diff)) / 2 ;
	for (int i = 0 ; i < m ; ++i) {
		c *= ques - i ;
	}
	for (int i = 2 ; i <= m ; ++i) {
		c /= i ;
	}
	ans = (double) c / (1 << ques) ;
	cout << ans ;
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
