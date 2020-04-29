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

int n , m , k , t , vis[1000] , lan[200][200] ;
vi adj [1000] ;
bool ok = false ;

void dfs(int node){
	vis[node] = 1 ;
	for (int child : adj[node]){
		if (vis[child] == 0){
			dfs(child) ;
		}
	}
}

void solve (int test_case){
	for(int i = 0 ; i < 1000 ; ++i){
        adj[i].clear() ;
        vis[i] = 0 ;
    }
    memset(lan,0,sizeof(lan)) ;
	cin >> n >> m ;
	for (int i = 1 ; i <= n ; ++i){
		cin >> k ;
		for (int j = 1 ; j <= k ; ++j){
			cin >> t ;
			lan[i][t] = 1 ;
			ok = true ;
		}
	}
	for (int i = 1 ; i <= n ; ++i){
		for (int j = 1 ; j <= n ; ++j){
			for (int a = 1 ; a <= m ; ++a){
				if (lan[i][a] && lan[j][a]){
					adj[i].pb(j) ;
					adj[j].pb(i) ;
				}
			}
		}
	}
	int ans = 0 ;
	for (int i = 1 ; i <= n ; ++i){
		if (vis[i] == 0){
			dfs(i) ;
			++ans ;
		}
	}
	ok == true ? cout << ans - 1 : cout << ans ;
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
