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
 
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve ()
{
	int n , val = INT_MAX , pos = -1 ;
	bool flag = false ;
	cin >> n ;
	vb check(n+1) ;
	Fi(i , 1 , n)
	{
		int k ;
		cin >> k ;
		int temp ;
		flag = false ;
		Fi(j , 1 , k)
		{
			cin >> temp ;
			if (flag == false && check[temp] == false)
			{
				flag = true ;
				check[temp] = true ;
			}
		}
		if (!flag)
		{
			pos = i ;
		}
	}
	if (pos != -1)
	{
		cout << "IMPROVE" << '\n' ;
		cout << pos << ' ' ;
		Fi(i , 1 , check.size())
		{
			if (check[i] == false)
			{
				cout << i << '\n' ;
				return ;
			}
		}
	}
	cout << "OPTIMAL" << '\n' ;
}
 
int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast ;
	int t = 1 ;
	cin>>t ;
	while (t--) 
	  solve () ;
	return 0 ;
}
