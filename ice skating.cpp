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
 
# define Fi(i,L,R) for (ull i = L ; i <= R ; i++)
# define Fd(i,R,L) for (ull i = R ; i >= L ; i--)
# define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

vi parent (100) ;
vi size (100) ;
 
void make_set (int a)   // to create the element into a set form... the element itself is a leader or root of set
{
	parent[a] = a ;
	size[a] = 1 ;
}

int find_parent (int a)   //  to find the representative (leader of set or root element) of the element 'a'
{
	if (a == parent[a])
	    return a ;
	return parent[a] = find_parent(parent[a]) ;
}

void join (int a , int b)   // to join smaller set to larger set
{
	a = find_parent(a) ;
	b = find_parent(b) ;
	if (a == b)
	    return ;
	if (size[a] < size[b])
	    swap (a , b) ;
	size[a] += size[b] ;
	parent[b] = a ;
}

void solve ()
{
	int n , ans = 0 ;
	cin >> n ;
	vpii v (n) ;
	Fi(i , 0 , n-1)
	{
		make_set(i) ;
		cin >> v[i].F >> v[i].S ;
	}
	Fi(i , 0 , n-1)
	{
		Fi(j , 0 , n-1)
		{
			if (v[i].F == v[j].F || v[i].S == v[j].S)
			    join(i , j) ;
		}
	}
	Fi(i , 0 , n-1)
	{
		if (i == parent[i])
		    ++ans ;
	}
	cout << ans - 1 ;
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
