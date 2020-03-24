/*
        what i did ?
        --> created edge-list in which cost of each veretex(city here) is stored as {cost[i] , 0 , i}.
          and the edges for all possible edges between the vertices.
        --> then forming the minimum spanning tree for obtained edge list.
            --> in kruskal how did i join ?
                --> according the cost of forming the power station.
                    (smaller cost element becomes the parent) 
        --> rest everything happened as per the definition of kruskal algorithm.
*/

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

int n ;
ll ans = 0 ;
vi parent(2001 , -1) ;
vpii pos (2001) ;
vi c (2001) ;
vi k (2000) ;
vi tower ;
vpii connected ;

#define new_type pair < ll , pii >
vector <new_type> edges ;

void read()
{
	cin >> n ;
	Fi(i , 1 , n)
	{
		cin >> pos[i].F >> pos[i].S ;
	}
	Fi(i , 1 , n)
	{
		cin >> c[i] ;
	}
	Fi(i , 1 , n)
	{
		cin >> k[i] ;
	}
}

int find_parent(int node)
{
	if (parent[node] < 0)
	    return node ;
	return parent[node] = find_parent(parent[node]) ;
}

bool join(new_type &temp)
{
	int a = temp.S.F ;
	int b = temp.S.S ;
	ll w = temp.F ;
	
	int p1 = find_parent(a) ;
	int p2 = find_parent(b) ;
	
	if (p1 == p2)
	    return false ;  // Already connected...
	
	ans += w ;
	
	if (a == 0)
	    tower.pb(b) ;
	else
	{
		connected.pb({a , b}) ;
	}
	
	if (c[a] > c[b])
	    swap(p1 , p2) ;
	
	parent[p1] += parent[p2] ;
	parent[p2] = p1 ;
	
	return true ;
}

ll how_far(const pii &u , const pii &v)
{
	ll far = abs(u.F - v.F) + abs(u.S - v.S) ;
	return far ;
}

create_edges()
{
	Fi(i , 1 , n)
	{
		edges.pb({c[i] , {0 , i}}) ;
	}
	
	Fi(i , 1 , n)
	{
		Fi(j , i+1 , n)
		{
			ll w = how_far(pos[i] , pos[j])*(0LL + k[i]+k[j]) ;
			edges.pb({w , {i , j}}) ;
		}
	}
}

void kruskal()
{
	sort(edges.begin() , edges.end()) ;
	
	for (auto ptr : edges)
	{
		join(ptr) ;
	}
}

void solve ()
{
	read() ;
	
	create_edges() ;
	
	kruskal() ;
	
	cout << ans << '\n' ;
	
	cout << tower.size() << '\n' ;
	for (auto i : tower)
	{
		cout << i << ' ' ;
	}
	
	cout << '\n' ; 
	
	cout << connected.size() << '\n' ;
	for (auto i : connected)
	{
		cout << i.F << ' ' << i.S << '\n' ;
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
