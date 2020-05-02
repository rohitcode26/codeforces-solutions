#include<bits/stdc++.h>
using namespace std;

# define D double
# define ll long long
# define ld long double
# define ull unsigned long long
# define ui unsigned int

# define F first
# define S second
# define mp make_pair
# define pb push_back
# define pf push_front

# define vi vector < int >
# define vc vector < char >
# define vs vector < string >
# define vb vector < bool >
# define vd vector < D >
# define vll vector < ll >
# define vull vector < ull >
# define vld vector < ld >

# define vvi vector < vector < int > >
# define vvb vector < vector < bool > >
# define vvc vector < vector < char > >
# define vvll vector < vector < ll > >
# define vvd vector < vector < D > >
# define vvld vector < vector < ld > >

# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp

# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >

# define vpld vector < pld >
# define vpii vector < pii >
# define vpll vector < pll >
# define vpDD vector < pDD >

# define vvpii vector < vector < pii > >

# define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))


const ld pie = 3.14159265358979 ;
const ll mod = 1e9 + 7 ;

////////////////////////////////////////////////////////////////////////////////

vi parent ;

int find_parent ( int node ) {
    if ( parent[node] < 0 ) {
        return node ;
    }
    parent[node] = find_parent ( parent[node] ) ;
    return parent[node] ;
}

void join ( int a , int b ) {
    int p1 = find_parent ( a ) ;
    int p2 = find_parent ( b ) ;
    if ( p1 == p2 ) {
        return ;
    }
    if ( parent[p1] > parent[p2] ) {
        swap(p1 , p2) ;
    }
    parent[p1] += parent[p2] ;
    parent[p2] = p1 ;
}

void solve ( int test_case )
{
    int n , m ;
    cin >> n >> m ;
    parent = vi (n , -1) ;
    for (int i = 0 ; i < m ; ++i) {
        int u , v ;
        cin >> u >> v ;
        --u ;
        --v ;
        join (u , v) ;
    }
    ll ans = 1 ;
    for (int i = 0 ; i < n ; ++i) {
        if ( parent[i] >= 0 ) {
        	continue ;
		}
        ll t = abs ( parent[i] );
        --t ;
        ans *= round(pow(2,t)) ;
    }
    cout << ans ;
}

int main()
{
    int t = 1;
    //cin >> t;

    for ( int i=0 ; i < t ; i++ ) solve(i);
    return 0;
}

