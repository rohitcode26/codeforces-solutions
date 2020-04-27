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
 
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
void solve (int testcase)
{
	int n , x , y ;
	cin >> n ;
	vi v (n) , check (n) ;
	Fi (i , 0 , n-1)
	{
		cin >> v[i] ;
		check[i] = v[i] ;
	}
	sort (check.begin() , check.end()) ;
	Fi (i , 1 , n-1)
	{
		if (v[i-1] > v[i])
		{
			x = i-1 ;
			break ;
		}
	}
	Fd (i , n-2 , 0)
	{
		if (v[i+1] < v[i])
		{
			y = i+1 ;
			break ;
		}
	}
	if (x <= y)
	{
		bool flag = true ;
		Fi(i , 0 , y-x)
		{
			if (v[y-i] != check[x+i])
			{
				flag = false ;
				break ;
			}
		}
		if (flag)
		    cout << "yes" << '\n' << x+1 << ' ' << y+1 ;
		else
		    cout << "no" ;
	}
	else
	{
		cout << "yes\n1 1" ;
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
