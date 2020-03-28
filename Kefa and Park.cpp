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
 
# define Fi(i,L,R) for (int i = L ; i <= R ; i++)
# define Fd(i,R,L) for (int i = R ; i >= L ; i--)
# define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

vb cat ;
vvi adj ;
ll ans = 0 ;
int n ,  m ;

void dfs(int node , int parent , int consec)
{
	if (cat[node])
	{
		++consec ;
		if (consec > m)
		    return ;
	}
	
	if (!cat[node])
	    consec = 0 ;   // chain of consecutive cats on a path breaks ;
	
	if (consec <= m && adj[node].size() == 1 && node != 0)   // leaf node is reached as it has only parent node in its adjacency list so size = 1 and ndoe != 0 means it's not root
	{
		++ans ;
		return ;
	}
	
	for (auto ptr : adj[node])
	{
		if (ptr != parent)
		    dfs(ptr , node , consec) ;
	}
}

void solve ()
{
	cin >> n >> m ;
	
	if (n == 1)    // only one node. it is root and leaf itself ; 
	{
		cout << '1' ;
		return ;
	}
	
	cat.resize(n) ;
	adj.resize(n) ;
	
	Fi(i , 0 , n-1)
	{
		bool t ;
		cin >> t ;
		cat[i] = t ;
	}
	
	Fi(i , 1 , n-1)
	{
		int a , b ;
		cin >> a >> b ;
		--a ;
		--b ;
		adj[a].pb(b) ;
		adj[b].pb(a) ;
	}
	
	dfs(0 , -1 , 0) ;
	cout << ans ;
}
 
int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast ;
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve () ;
	return 0 ;
}
