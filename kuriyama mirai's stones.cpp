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

/*// SEIVE OF ERATOSTHENES ::::
	
	int N = 100000000 ;
	vb is_prime (N+1) ;
	Fi(i , 0 , N)
		is_prime[i] = true ;
	is_prime[0] = false ;
	is_prime[1] = false ;
	int end = sqrt (N) ; 
	for (int i = 2 ; i <= end ; i++)
	{
		if (is_prime[i])
		{
			for (int j = i ; j <= N ; j += i)
			{
				is_prime[i*j] = 0 ;
			}
		}
	}*/

/*  TO COUNT NO. DIVISORS OF 'N' ::

int no_of_div (int n)
{
	int count = 0 ;
	int root = sqrt(n) ;
	Fi(i , 1 , root)
	{
		if (n % i == 0)
		    ++count ;
	}
	if (n == root*root)
	   return 2*count - 1 ;
	else
	   return 2*count ;
}*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve (int testcase)
{
	ll n ;
	cin >> n ;
	vll v1 (n+1) , v2 (n+1);
	Fi (i , 1 , n)
	{
		cin >> v1[i] ;
		v2[i] = v1[i] ;
		v1[i] += v1[i-1] ;
	}
	sort (v2.begin() , v2.end()) ;
	Fi (i , 1 , n)
	    v2[i] += v2[i-1] ;
	ll m ;
	cin >> m ;
	Fi (a , 1 , m)
	{
		ll type , l , r ;
		cin >> type >> l >> r ;
		if (type == 1)
		{
			cout << v1[r] - v1[l-1] << '\n' ;
		}
		else
		{
			cout << v2[r] - v2[l-1] << '\n' ;
		}
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
	  solve (1) ;
	return 0 ;
}
