/// VIRTUAL INDEX TRICK.
/// STORED THE INDICES OF STRINGS IN A MAP
/// FOR EVERY STRING DUMMY INDICES WERE DEDICATED IN PARENT ARRAY FOR ANTONYM ((i+n)-th) 

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

int n , m , q ;
vi parent (2e5 + 2 , -1);
unordered_map <string , int> hmp ;


int find_parent(int node)
{
	if (parent[node] < 0)
	    return node ;
	return parent[node] = find_parent(parent[node]) ;
}

void join(int a , int b)
{
	int p1 = find_parent(a) ;
	int p2 = find_parent(b) ;
	
	if (p1 == p2)
	    return ;
	
	if (parent[p1] > parent[p2])
	    swap(p1 , p2) ;
	
	parent[p1] += parent[p2] ;
	parent[p2] = p1 ;
}

void read()
{
	cin >> n >> m >> q ;
	
	Fi(i , 1 , n)
	{
		string str ;
		cin >> str ;
		hmp[str] = i ;
	}
	    
	Fi(i , 1 , m)
	{
		int a ;
		string s1 , s2 ;
		cin >> a ;
		cin >> s1 >> s2 ;
		int indx1 = hmp[s1] ;
		int indx2 = hmp[s2] ;
		if (a == 1)
		{
			if (find_parent(indx1) == find_parent(indx2+n) || find_parent(indx1+n) == find_parent(indx2))
			    cout << "NO" << '\n' ;
			else
			{
				cout << "YES" << '\n' ;
				join(indx1 , indx2) ;
				join(indx1+n , indx2+n) ;
			}
		}
		else
		{
			if (find_parent(indx1) == find_parent(indx2) || find_parent(indx2+n) == find_parent(indx1+n))
			    cout << "NO" << '\n' ;
			else
			{
				cout << "YES" << '\n' ;
				join(indx1 , indx2+n) ;
				join(indx1+n , indx2) ;
			}
		}
	}
	
}

void solve ()
{
	read() ;
	
	while(q--)
	{
		string a , b ;
		cin >> a >> b ;
		int id1 , id2 ;
		id1 = hmp[a] ;
		id2 = hmp[b] ;
		if (find_parent(id1) == find_parent(id2))
		    cout << "1\n" ;
		else if (find_parent(id1+n) == find_parent(id2))
		    cout << "2\n" ;
		else 
		    cout << "3\n" ;
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
	  solve () ;
	return 0 ;
}
