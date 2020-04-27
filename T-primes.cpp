#include<bits/stdc++.h>
 
using namespace std;
 
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
 
# define Fi(i,L,R) for (ll i = L; i <= R; i++)
# define Fd(i,R,L) for (ll i = R; i >= L; i--)
# define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
int N = 1000000 ;
vb prime (N+1) ;
 
 
// SEIVE OF ERATOSTHENES ::::
 
void sieve()
{
	Fi(i , 1 , N)
		prime[i] = true ;
	for (ll i = 2 ; i <= N ; i++)
	{
		if (prime[i])
		{
			for (ll j = i*i ; j <= N ; j += i)
			{
				prime[j] = false ;
	 	    }
		}
	}
}
 
/*  // TO COUNT NO. DIVISORS OF 'N' ::
 
int no_of_div (int n)
{
	int count = 0 ;
	Fi(i , 1 , sqrt(n))
	{
		if (n % i == 0)
		    ++count ;
	}
	int root = sqrt(n) ;
	if (n == root*root)
	   return 2*count - 1 ;
	else
	   return 2*count ;
}
*/
 
bool isTprime(ll num)
{
	if (num <= 3)
	    return false ;
	int sqval = sqrt(num) ;
	if (1LL*sqval*sqval != num)
	    return false ;
	return prime[sqval] ;
}
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
void solve (int testcase)
{
	int n ;
	cin >> n ;
	Fi (i , 1 , n)
	{
		ll a ;
		cin >> a ;
		if (isTprime(a))
		    cout << "YES" << '\n' ;
		else
		    cout << "NO" << '\n' ;
	}
}
 
int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast ;
	int t = 1 ;
//	cin>>t ;
	sieve() ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
