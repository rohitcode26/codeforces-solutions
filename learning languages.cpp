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
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp
 
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

# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
const ll MOD = 1e9 + 7 ;
const int infi =  INT_MAX ;
const ll infll =  LLONG_MAX ;
const ld PI = 3.1415926535897932384626 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

vi parent ;
vi lan[110] ;
int used[110] ;

int find_parent (int a){
	if (parent[a] < 0)
	    return a ;
	return parent[a] = find_parent(parent[a]) ;
}

bool join (int a , int b){
	int p1 = find_parent(a) ;
	int p2 = find_parent(b) ;
	if (p1 == p2){
		return false ;
	}
	if (parent[p1] > parent[p2]){
		swap(p1 , p2) ;
	}
	parent[p1] += parent[p2] ;
	parent[p2] = p1 ;
	return true ;
}

void solve (int test_case){
	int n , m , k ;
	ll zero = 0 ;
	cin >> n >> m ;
	vvi lan (n+1) ;
	parent = vi (110 , -1) ;
	for (int i = 0 ; i < n ; ++i){
		cin >> k ;
		for (int j = 0 ; j < k ; ++j){
			int l ;
			cin >> l ;
			--l ;
			lan[i].pb(l) ;
			used[l] = 1 ;
		}
		if (lan[i].size() == 0){
			++zero ;
		}
		for (int j = 1 ; j < lan[i].size() ; ++j){
			join(lan[i][j] , lan[i][j-1]) ;
		}
	}
	ll ans = 0 ;
	for (int i = 0 ; i < m ; ++i){
		if (parent[i] < 0 && used[i] == 1){
			++ans ;
		}
	}
	cout << max(ans-1 , 0LL) + zero ;
}
 
int main()
{
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
