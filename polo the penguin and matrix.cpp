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
 
# define Fi(i,L,R) for (int i = L; i <= R; i++)
# define Fd(i,R,L) for (int i = R; i >= L; i--)
# define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve (int testcase)
{
	int n , m , d ; 
	ll sum = 0 ;
	cin >> n >> m >> d ;
	int pr = n*m ;
	vi v (pr + 1) ;
	Fi(i , 1 , pr)
	    cin >> v[i] ;
	Fi(i , 1 , pr-1)
	{
		if (v[i] % d != v[i+1] % d)
		{
			cout << -1 ;
			R ;
		}
	}
	sort (v.begin() , v.end()) ;
	Fi(i , 1 , pr)
	{
		sum += abs (v[i] - v[pr/2 + 1]) ;  // accumulating all the differences the elements have from the median (middle-most) element 
	}
	cout << sum/d ;  // since d can be increased r decreased at one move ... so instead of single incr. or decr. --> do ... +d or -d
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
