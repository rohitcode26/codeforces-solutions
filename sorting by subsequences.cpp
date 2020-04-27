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

vi parent ;

int find_parent (int ind)   //  to find the representative (leader of set or root element) of the element 'a'
{
	if (parent[ind] < 0)
	    return ind ;
	return parent[ind] = find_parent(parent[ind]) ;
}

void join (int ind1 , int ind2)   // to join smaller set to larger set
{
	int p1 = find_parent(ind1) ;
	int p2 = find_parent(ind2) ;
	if (p1 == p2)
	    return ;
	if (parent[p1] > parent[p2])
	    swap (p1 , p2) ;
	parent[p1] += parent[p2] ;
	parent[p2] = p1 ;
}

void solve ()
{
	int n ;
	cin >> n ;
	parent = vi(n , -1) ;
	vpii v(n) ;
	Fi(i , 0 , n-1)
	{
		cin >> v[i].F ;
		v[i].S = i ;
	}
	sort (v.begin() , v.end()) ;
	Fi(i , 0 , n-1)
		join(i , v[i].S) ;
	map <int , vi> hmp ;
	Fi(i , 0 , n-1)
	{
		int p = find_parent(i) ;
		hmp[p+1].pb(i+1) ;
	}
	cout << hmp.size() << '\n' ;
	for (auto x : hmp)
	{
		cout << x.S.size() << ' ' ;
		for (auto i : x.S) 
		    cout << i << ' ' ;
		cout << '\n' ;
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
