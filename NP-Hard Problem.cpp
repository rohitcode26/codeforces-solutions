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

void bad(){
	cout << -1 << '\n' ;
	exit (0) ;
}

const int N = 1e5 + 10 ;

int n , m , u , v ;
vi adj [N] ;
vi col (N) ;

void read(){
	cin >> n >> m ;
	for (int i = 0 ; i < m ; ++i){
		int u , v ;
		cin >> u >> v ;
		--u ;
		--v ;
		adj[u].pb(v) ;
		adj[v].pb(u) ;
	}
}

void dfs(int node){
	for (int &child : adj[node]){
		if (col[child] == col[node]){
			bad() ;
		}
		if (col[child] == 0){
			col[child] = 3 - col[node] ;
			dfs(child) ;
		}
	}
}

void solve (int test_case){
	read() ;
	for (int i = 0 ; i < n ; ++i){
		if (col[i] == 0){
			col[i] = 1 ;
			dfs(i) ;
		}
	}
	int cnt = 0 ;
	for (int i = 0 ; i < n ; ++i){
		if (col[i] == 1){
			++cnt ;
		}
	}
	cout << cnt << '\n' ;
	for (int i = 0 ; i < n ; ++i){
		if (col[i] == 1){
			cout << i+1 << ' ' ;
		}
	}
	cout << '\n' ;
	cout << n - cnt << '\n' ;
	for (int i = 0 ; i < n ; ++i){
		if (col[i] == 2){
			cout << i+1 << ' ' ; 
		}
	}
	cout << '\n' ;
}
 
int main(){
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	FAST ;
	int tc = 1 ;
//	cin >> tc ;
	while (tc--){
		solve (tc) ;
	}
	return 0 ;
}
