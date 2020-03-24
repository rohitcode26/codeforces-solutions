/* 
    what I did in this question ? 
	-->  Stored the graph as Edge List. Because we have to do oprations on edges only.
	-->  Then I sorted the edge list with increasing order of weights. 
	-->  Then I traversed the edge list and joined the pair of vertices/nodes.
	-->  how did I join ?
	    --> I joined the two vertices if they both are special vertices as mentioned in  question
	        and if one of them is non-special then I set the parent[non-special] = special. 
	-->  Now simply found which vertex has all the special connected to it. And the weight of edge with that pair becomes the answer.
	-->  Displayed the answer 'k' times.
	
	THANKS TO MY FRIEND RITESH RASTOGI --> @ritesh1340.
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

const int N = 1e5 + 2 ;
int n , m , k ;
vi parent(N , -1) ;
vb special(N) ;

#define new_type pair < int , pii > 
vector < new_type > edges ;

int find_parent (int a)   //  to find the representative (leader of set or root element) of the element 'a'
{
	if (parent[a] < 0)
	    return a ;
	return parent[a] = find_parent(parent[a]) ;
}

void join (new_type temp)   // to join smaller set to larger set
{
	int w = temp.F ;
	int a = temp.S.F ;
	int b = temp.S.S ;

		
	int p1 = find_parent(a) ;
	int p2 = find_parent(b) ;
	if (p1 == p2)
	    return ;
	
	if (special[p1] == true && special[p2] == true)
	{
		if(parent[p1] > parent[p2])
		    swap(p1 , p2) ;
		
		parent[p1] += parent[p2] ;
		parent[p2] = p1 ;
		
		return ;
	}
	
	if (special[p1] == false && special[p2] == true)
		swap(p1 , p2) ;
	parent[p2] = p1 ;
}

void read()
{
	cin >> n >> m >> k ;
	Fi(i , 0 , k-1)
	{
		int t ;
		cin >> t ;
		--t ;
		special[t] = true ;
	}
	Fi(i , 1 , m)
	{
		int u , v , w ;
		cin >> u >> v >> w ;
		--u ;
		--v ;
		edges.pb({w , {u , v}}) ;
	}
}

void solve ()
{
	read() ;
	sort(edges.begin() , edges.end()) ;
	
	int ans = -1 ;
	
	for(auto ptr : edges)
	{
		join(ptr) ;
		
		int p = find_parent(ptr.S.F) ;
		
		if (parent[p] == -k)
		{
			ans = ptr.F ;
			break ;
		}
	}
	
	Fi (i , 1 , k)
	{
		cout << ans << ' ' ;
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
