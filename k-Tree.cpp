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
 
#define inf INT_MAX
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int dp[100][2] ;    // dp[n][1] represents the number of ways to reach sum = n when atleast one edge atleast = d is there and 
                    // dp[n][0] is number of ways to reach sum = n when atleast one edge = d is not there ;

void add(int &a , int b)   // adds B to A and also finds MODULO 1e9+7 ;
{
	a += b ;
	
	if (a >= MOD)
	{
		a -= MOD ;
	}
}

void solve ()
{
	int n , k , d ;
	cin >> n >> k >> d ;
	
	dp[0][0] = 1 ;   // there is one way to get sum = 0 with no edge and that is --> do nothing ;
	dp[0][1] = 0 ;   // there is no way to get sum = 0 with atleast one edge atleast ; 
	
	for (int i = 1 ; i <= n ; ++i)  // values of sum ;
	{
		dp[i][0] = 0 ;   // till now let us assume that there is no way to get sum = i with no edge ;
		dp[i][1] = 0 ;   
		
		for(int j = 1 ; j <= k ; ++j)  // values of edge weights
		{
			
			if (i < j)   // edge weight has exceeded sum 'n' ;
			    break ;
			
			if (j < d)  // edge weight is less than required compulsary edge weight
			{
				add(dp[i][0] , dp[i-j][0]) ;
				add(dp[i][1] , dp[i-j][1]) ;
			}
			else              // why i-j ?? because after already making sum = 'i-j' we will add 'j' to it so that sum becomes 'i' ; 
			{
				add(dp[i][1] , dp[i-j][0]) ;
				add(dp[i][1] , dp[i-j][1]) ;
			}
		}
	}
	
	cout << dp[n][1] ;
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
