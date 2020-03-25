// i was initially applying brute forces but it was complex
// i could be done by making an undirected graph and applaying kruskal's algo for MST

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

const int N = 1e3 + 2 ;
int n , m , k , w ;
ll ans = 0 ;
vi parent(N , -1) ;
vector <vs> v ;
vi lis[N] ;

#define new_type pair < int , pii > 
vector < new_type > edges ;

void read()
{
	cin >> n >> m >> k >> w ;
	v.resize(k + 1) ;
	Fi(i , 1 , k)
	{
		v[i].resize(n) ;
		Fi(j , 0 , n-1)
		{
			cin >> v[i][j] ;
		}
	}
}

int distinct(const vs &a , const vs &b)
{
	int diff = 0 ;
	Fi(i , 0 , n-1)
	{
		Fi(j , 0 , m-1)
		{
			if (a[i][j] != b[i][j])
			    ++diff ;
		}
	}
	return diff ;
}

void create_edges()
{
	
	Fi(i , 1 , k)
	   edges.pb({m*n , {i , 0}}) ;
	
	Fi(i , 1 , k)
	{
		Fi(j , 1 , k)
		{
			if (i == j)
			    continue ;
			int dcost = distinct(v[i] , v[j]) ;
			edges.pb({dcost*w , {i , j}}) ;
		}
	}
}

int find_parent(int node)
{
	if (parent[node] < 0)
	    return node ;
	return parent[node] = find_parent(parent[node]) ;
}


void join(new_type temp)
{
	int a = temp.S.F ;
	int b = temp.S.S ;
	int w = temp.F ;
	
	int p1 = find_parent(a) ;
	int p2 = find_parent(b) ;
	
	if (p1 == p2)
	    return ;
	
	ans += w ;
	
	lis[a].pb(b) ;
	lis[b].pb(a) ;
	
	if (parent[p1] > parent[p2])
	    swap(p1 , p2) ;
	
	parent[p1] += parent[p2] ;
	parent[p2] = p1 ;
}

void kruskal()
{
	for(auto ptr : edges)
	{
		join(ptr) ;
	}
}

bool vis[N] ;

void dfs(int node)
{
	vis[node] = true ;
	for (auto i : lis[node])
	{
		if (vis[i])
		    continue ;
		cout << i << ' ' << node << '\n' ;
		dfs(i) ;
	}
}

void solve ()
{
	read() ;
	
	create_edges() ;
	
	sort(edges.begin() , edges.end()) ;
	
	kruskal() ;
	
	cout << ans << '\n' ;
	dfs(0) ; 
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
