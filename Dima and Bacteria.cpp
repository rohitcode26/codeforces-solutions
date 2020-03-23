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

const int N = 1e5 + 4 ; 
const int inf = 1e9 + 1e2 ;

int n , m , k ;
vi parent (N , -1) ;
vi type ;

void bad()
{
	cout << "No" << '\n' ; 
	exit(0) ;
}

int w ;
vvi ans (520 , vi (520)) ;

void fill()
{
	Fi(i , 1 , k)
	{
		Fi(j , 1 , k)
		{
			if (i != j)
			    ans[i][j] = inf ;
		}
	}
}


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
	
	if (w == 0)
	{
		if (parent[p1] > parent[p2])
		    swap(p1 , p2) ;
		
		parent[p1] += parent[p2] ;
		parent[p2] = p1 ;
	}
	
	int ty1 = type[a] ;
	int ty2 = type[b] ;
	
	if (ty1 == ty2)
	    return ;
	
	int val = ans[ty1][ty2] ;
	
	if(val < w)
	    return ;
	
	ans[ty1][ty2] = w ;
	ans[ty2][ty1] = w ;
}

void read()
{
	cin >> n >> m >> k ;
	type.resize(n+1) ;   // why n+1 ?  because it tells the type of any vertex(BACTERIA here)
	int ind = 1 ;
	Fi(i , 1 , k)
	{
		int temp ;
		cin >> temp ;
		
		for(int j = 1 ; j <= temp ; ++j , ++ind)
		{
			type[ind] = i ;
		}
	}
	
	fill() ;   // preparation for FLOYD WARSHALL
	
	Fi(i , 1 , m)
	{
		int a , b ;
		cin >> a >> b >> w ;
		join(a , b) ;
	}
}

void same_or_not()
{
	Fi(i , 2 , n)
	{
		if (type[i] != type[i-1])   // if they are same then move on to check if they belong to same component
		    continue ;
		if (find_parent(i) != find_parent(i-1))  // if they are from different components --> ABORT
		    bad() ;
	}
}

void floyd_warshall()
{
	Fi(mid , 1 , k)
	{
		Fi(i , 1 , k)
		{
			Fi(j , 1 , k)
			{
				ans[i][j] = min(ans[i][j] , ans[i][mid] + ans[mid][j]) ;
			}
		}
	}
}

void answer()
{
	cout << "Yes" << '\n' ;
	Fi(i , 1 , k)
	{
		Fi(j , 1 , k)
		{
			if (ans[i][j] >= inf)
			    cout << -1 << ' ' ;
			else
			    cout << ans[i][j] << ' ' ;
		}
		cout << '\n' ;
	}
}

void solve ()
{
	read() ;
	same_or_not() ;
	floyd_warshall() ;
	answer() ;
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
