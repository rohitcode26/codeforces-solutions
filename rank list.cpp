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

bool comp (pii a , pii b)
{
    if (a.F > b.F)
        return true ;
    
	else if (b.F > a.F) 
	    return false ;
    
	else if (a.S < b.S) 
		return true ;
    
	else
		return false ;
}

void solve (int test_case)
{
	int n , k , ans = 1 ;
	cin >> n >> k ;
	
	vpii v (n) ;
	
	Fi(i , 0 , n-1)
		cin >> v[i].F >> v[i].S ;
	    
	sort(all(v) , comp) ;
	
	for (int i = k-2 ; i >= 0 ; --i)
    {
        if (v[i].F == v[k-1].F && v[i].S == v[k-1].S) 
		    ++ans ;
    }
	
	for (int i = k ; i < n ; ++i)
	{
		if (v[i].F == v[k-1].F && v[i].S == v[k-1].S)
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
//	cin >> tc ;
	while (tc--) 
	    solve (tc) ;
	return 0 ;
}
