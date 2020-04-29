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

int dx[] = {1, -1, 0, 0} ;
int dy[] = {0, 0, 1, -1} ;
 
///////////////////////////////////////////////////////////////////////////////////////

int n , m ;
string grid [51] ;
bool vis [51][51] ;
bool findCycle = false ;

void dfs(int x , int y  , int prevx , int prevy , char ch){
	if (x < 0 || x >= n || y < 0 || y >= m){
		return ;
	}
	if (grid[x][y] != ch){
		return ;
	}
	if (vis[x][y]){
		findCycle = true ;
		return ;
	}
	vis[x][y] = true ;
	for (int i = 0 ; i < 4 ; ++i){
		int nextx = x + dx[i] ;
		int nexty = y + dy[i] ;
		if (nextx == prevx && nexty == prevy){
			continue ;
		}
		dfs(nextx , nexty , x , y , ch) ;
	}
}

void solve (int test_case){
	cin >> n >> m ;
	for (int i = 0 ; i < n ; ++i){
		cin >> grid[i] ;
	}
	memset(vis , false , sizeof(vis));
	for (int i = 0 ; i < n ; ++i){
		for (int j = 0 ; j < m ; ++j){
			if (vis[i][j] == false){
				dfs (i , j , -1 , -1 , grid[i][j]) ;
			}
		}
	}
	findCycle ? cout << "Yes\n" : cout << "No\n" ;
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
