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
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp
 
# define Fi(i,L,R) for (int i = L ; i <= R ; i++)
# define Fd(i,R,L) for (int i = R ; i >= L ; i--)

# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
const ll MOD = 1e9 + 7 ;
const int infi =  INT_MAX ;
const ll infll =  LLONG_MAX ;
const ld PI = 3.1415926535897932384626 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

vi parent ;

int find_parent(int node)
{
	if (parent[node] < 0)
	    return node ;
	return parent[node] = find_parent(parent[node]) ;
}

void join(int n1 , int n2)
{
	int par1 = find_parent(n1) ;
	int par2 = find_parent(n2) ;
	
	if (par1 == par2)
	    return ;
	
	if (parent[par1] > parent[par2])
	    swap(par1 , par2) ;
	    
	parent[par1] += parent[par2] ;
	parent[par2] = par1 ;
}

void solve (int test_case)
{
	int n , k ;
	cin >> n >> k ;
	
	string s ;
	cin >> s ;
	
	parent = vi(n , -1) ;
	
	// now for palindrome ;
	
	for (int i = 0 ; i < n-1-i ; ++i)
	{
		join(i , n-1-i) ;   // palindrome property ;
	}
	
	// now join the repeating indices of size k appearing n/k times ;
	
	for (int i = 0 ; i < k ; ++i)
	{
		for(int j = 0 ; ; ++j)
		{
			int jump = i + j*k ;  // jumps to make string k-periodic (repeating after k characters) ;
			
			if (jump > n-1)
			    break ;
			
			join(i , jump) ;
		}
	}
	
	map <int , vi> par_with_child ;
	
	for (int i = 0 ; i < n ; ++i)
	{
		int prnt = find_parent(i) ;
		
		par_with_child[prnt].pb(i) ;   // bringing all children under their resoective parents ;
	}
	
	map <int , char> hmp ;
	
	for (auto & ptr : par_with_child)
	{
		vi occ (26) ;
		
		for (auto i : ptr.S)   // counting occurence of each character under a single parent 
		{
			int indx = s[i] - 'a' ;
			++occ[indx] ;
		}
		
		int times = 0 ;
		char most_char ;
		
		for (int i = 0 ; i < 26 ; ++i)   // now checking which character is occuring the most under a single parent
		{
			if (occ[i] > times)
			{
				times = occ[i] ;
				most_char = 'a' + i ;
			}
		}
		
		hmp[ptr.F] = most_char ;  // storing the maximum occuring character for every Disjoint Set
	}
	
	int ans = 0 ;
	
	for (int i = 0 ; i < n ; ++i)
	{
		int prnt = find_parent(i) ;
		
		if (s[i] != hmp[prnt])   // if the character at that index is not the one with max occurence then it's needed to be changed
		    ++ans ;
	}
	
	cout << ans << '\n' ;
}
 
int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	
	FAST ;
	int tc = 1 ;
	cin >> tc ;
	while (tc--) 
	    solve (tc) ;
	return 0 ;
}
