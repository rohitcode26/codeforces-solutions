#include<bits/stdc++.h>

using namespace std ;

#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mp make_pair
#define PI 3.141592653589793
#define MOD 1000000007

#define vi vector <int>
#define vl vector <long>
#define vb vector <bool>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vs vector <string>
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,R,L) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;


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
}*/


void solve (int testcase)
{
	int n ;
	cin >> n ;
	vi v (2*n) ;
	Fi(i , 0 , 2*n - 1)
	    cin >> v[i] ;
	vpii vp ;
	Fi(i , 0 , 2*n - 1)
	{
		vp.pb(mp(v[i] , i+1)) ;
	}
	sort (vp.begin() , vp.end()) ;
	for (int i = 0 ; i < 2*n - 1 ; i += 2)
	{
		if (vp[i].F != vp[i+1].F)
		{
			cout << -1 ;
			R ;
		}
	}
	for (auto i : vp)
	{
		cout << i.S << ' ' ; //<< (i+1).S << '\n' ;
	}
}

int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast 
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
