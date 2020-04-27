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
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

vvi parent ;

int find_parent (int vertex , int color)   //  to find the representative (leader of set or root element) of the element 'a'
{
	if (parent[color][vertex] < 0)
	    return vertex ;
	return parent[color][vertex] = find_parent(parent[color][vertex] , color) ;
}

void join (int ver1 , int ver2 , int color)   // to join smaller set to larger set
{
	int p1 = find_parent(ver1 , color) ;
	int p2 = find_parent(ver2 , color) ;
	if (p1 == p2)
	    return ;
	if (parent[color][p1] > parent[color][p2])
	    swap (p1 , p2) ;
	parent[color][p1] += parent[color][p2] ;
	parent[color][p2] = p1 ;
}

void solve ()
{
	int n , m ;
	cin >> n >> m ;
	parent = vvi(100 , vi(n , -1)) ;
	Fi(i , 1 , m)
	{
		int a , b , c ;
		cin >> a >> b >> c ;
		join(--a , --b , --c) ;
	}
	int q ;
	cin >> q ;
	while(q--)
	{
		int a , b ;
		int ans = 0 ;
		cin >> a >> b ;
		--a , --b ;
		Fi(i , 0 , 99)
		{
			int p1 = find_parent(a , i) ;
			int p2 = find_parent(b , i) ;
			if (p1 == p2)
			    ++ans ;
		}
		cout << ans << '\n' ;
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
