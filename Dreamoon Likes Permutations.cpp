#include<bits/stdc++.h>
 
using namespace std ;

#define int long long
 
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
 
const int infi =  INT_MAX ;
const ll infll =  LLONG_MAX ;
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve (int test_case)
{
	int n ;
	cin >> n ;
	
	ll sum = 0 ;
	
	vi v (n+1) ;
	
	Fi(i , 1 , n)
	{
		cin >> v[i] ;
		sum += v[i] ;
	}
	
	vi pre(n+1) , suf(n+2) ;  // because we have to check from ends of the given sequence.
	
	map <int , int> mp1 , mp2 ;
	
	Fi(i , 1 , n)
	{
		pre[i] += pre[i-1] ;  // pre[i] denotes the number of distinct elements till i-th index.
		
		if (mp1[v[i]] == 0)
		{
			++pre[i] ;
		}
		
		++mp1[v[i]] ;
	}
	
	Fd(i , n , 1)
	{
		suf[i] += suf[i+1] ;
		
		if (mp2[v[i]] == 0)
		{
			++suf[i] ;
		}
		
		++mp2[v[i]] ;
	}
	
	ll acc = 0 ;
	
	vpii ans ;
	
	Fi(len , 1 , n-1)
	{
		acc += v[len] ;
		if (pre[len] == len && suf[len+1] == n-len && acc == len*(len+1)/2 && (sum-acc) == (n-len)*(n-len+1)/2)
		{
			ans.pb(mp(len , n-len)) ;
		}
	}
	
	cout << ans.size() << '\n' ;
	for(auto ptr : ans)
	{
		cout << ptr.F << ' ' << ptr.S << '\n' ;
	}
}
 
signed main()
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
