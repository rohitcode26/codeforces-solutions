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

int find_parent (int a)   //  to find the representative (leader of set or root element) of the element 'a'
{
	if (parent[a] < 0)
	    return a ;
	return parent[a] = find_parent(parent[a]) ;
}

void join (int a , int b)   // to join smaller set to larger set
{
	int p1 = find_parent(a) ;
	int p2 = find_parent(b) ;
	if (p1 == p2)
	    return ;
	if (p1 > p2)
	    swap (p1 , p2) ;
	parent[p1] += parent[p2] ;
	parent[p2] = p1 ;
}

void solve ()
{
	int n ;
	cin >> n ;
	parent = vi(n+1 , -1) ;
	vi final(n+1) ;
	Fi(i , 1 , n)
	    cin >> final[i] ;
	Fi(i , 1 , n)
	{
		int a ;
		cin >> a ; 
		if (i + a <= n)
		    join(i , i+a) ;
		if (i - a > 0)
		    join(i , i-a) ;
	}
	Fi(i , 1 , n)
	{
		if (find_parent(i) != find_parent(final[i]))
		{
			cout << "NO" ;
			return ;
		}
	}
	cout << "YES" ;
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
