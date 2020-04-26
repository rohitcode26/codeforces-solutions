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
	int  h1 , a1 , c1 , h2 , a2 ;
	cin >> h1 >> a1 >> c1 >> h2 >> a2 ;
	vector <int> move ;
	while(h2 > 0){
		if (h2 <= a1){
			move.pb(1) ;
			break ;
		} else if (h1 <= a2) {
			move.pb(0) ;
			h1 += c1 ;
		} else {
			move.pb(1) ;
			h2 -= a1 ;
		}
		h1 -= a2 ;
	}
	cout << move.size() << '\n' ;
	for (int i : move){
		if (i == 1){
			cout << "STRIKE\n" ;
		} else {
			cout << "HEAL\n" ;
		}
	}
}
 
int main(){
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast ;
	int t = 1 ;
//	cin >> t ;
	while (t--) 
	    solve (t) ;
	return 0 ;
}

