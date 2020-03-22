//  approach --> DSU
//  try to check if the graph is forming according to given conditions
//  and if there is any unconnected component in graph
//  else solution passes.

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

#define inf 1e18
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

vi parent (200001) ;
vll size(200001) ;
vector < pair <int , pii> > edges ;
map <ll , ll> cntmp ;

int find_parent (int a)   //  to find the representative (leader of set or root element) of the element 'a'
{
	if (a == parent[a])
	    return a ;
	return parent[a] = find_parent(parent[parent[a]]) ;
}

ll join (ll a , ll b)   // to join smaller set to larger set and return the size of larger set before joining ;
{
	ll p1 = find_parent(a) ;
	ll p2 = find_parent(b) ;
	
	ll ansval = (size[p1])*(size[p2]) ;
	
	parent[p1] = p2 ;
	size[p2] += size[p1] ;
	
	return ansval ;
}

void solve ()
{
	int n , m ;
	cin >> n >> m ;
	
	// get the input and store as EDGE LIST ;
	
	Fi(i , 0 , n-2)
	{
		int u , v , w ;
		cin >> u >> v >> w ;
		edges.pb({w , {u , v}}) ;
	}
	
	// initialisation
	
	Fi(i , 1 , n)
	{
		parent[i] = i ;
		size[i] = 1 ;
	}
	
	sort(edges.begin() , edges.end()) ;
	
	// After the sorting the edges by WEIGHT , store the count of how many pairs for every edge weight are present ;
	
	Fi(i , 0 , n-2)
	{
		ll a = edges[i].S.F , b = edges[i].S.S , c= edges[i].F ;
		cntmp[c] += join(a , b) ;
	}
	
	// Now store the pairs in a vector , to be noted for example : that edge weight 5 will have all pairs with edge weight {1 , 2, 3 , 4 , 5} ; 
	
	ll prevv = 0 ; 
	vpll v ;
	for(auto &ptr : cntmp)
	{
		v.pb({ptr.F , ptr.S + prevv}) ;
		prevv += ptr.S ;
	}
	
	// for each query find the no. of pairs strictly greater than desired edge weight pairs by using UPPER_BOUND , take previous value as
	// UPPER_BOUND returns strictly greater value than desired ans. ;
	
	while(m--)
	{
		ll qval ;
		cin >> qval ;
		pll temp = {qval , inf} ;
		auto iter = upper_bound(v.begin() , v.end() , temp) ;
		if (iter == v.begin())
		    cout << 0 << ' ' ;
		else
		{
			iter-- ;
			cout << iter->S << ' ' ;
		}
	}
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
