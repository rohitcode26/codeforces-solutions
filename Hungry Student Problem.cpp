#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef long double ld ;
typedef double D ;
typedef pair <int , int> pii ;
typedef pair <ll , ll> pll ;
typedef pair <ld , ld> pld ;

#define vi vector <int>
#define vb vector <bool>
#define vll vector <ll>
#define vs vector <string>
#define vpii vector <pii>
#define vpll vector <pll>
#define vvi vector < vi >
#define vvll vector < vll >
#define vvb vector < vb >
#define pb push_back 
#define mp make_pair
#define pf push_front
#define all(v) v.begin() , v.end()
#define allrev(v) v.rbegin() , v.rend()
#define fast ios_base :: sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0)
#define F first
#define S second
#define pld pair <ld , ld>
#define vpld vector < pld >
#define MOD 1e9+7
#define infi INT_MAX
#define infll LLONG_MAX

//////////////////////////////////////////////////

void solve (int tcase){
	int x ;
	cin >> x ;
	if (x < 3){
		cout << "NO\n" ;
		return ;
	}
	if (x < 7){
	    if (x % 3){
			cout << "NO\n" ;
		} else {
			cout << "YES\n" ; 
		}
		return ;
	}
	if (x % 3 == 0 || x % 7 == 0){
		cout << "YES\n" ;
		return ;
	}
	for (int i = 0 ; i <= 100 ; ++i){
		for (int j = 0 ; j <= 100 ; ++j){
			if (i*3 + j*7 == x){
				cout << "YES\n" ;
				return ;
			}
		}
	}
	cout << "NO\n" ;
}
 
int main(){
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast ;
	int t = 1 ;
	cin >> t ;
	while (t--) 
	    solve (t) ;
	return 0 ;
}

