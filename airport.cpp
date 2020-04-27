#include<bits/stdc++.h>

using namespace std ;

#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mod1 1000000007

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vs vector <string>
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,R,L) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

void solve(int testcase)
{
	int n , m , leastmoney = 0 , maxmoney = 0 , org = 0 , passenger = 0 ;
	cin >> n >> m ;
	vi v (m) ;
	Fi(i , 0 , m-1)
	   cin >> v[i] ;
	sort (v.begin() , v.end()) ;
	Fi(i , 0 , m-1)
	{
		org = v[i] ;
		while (org > 0 && passenger < n)
		{
			leastmoney += org ;
			--org ;
			++passenger ;
		}
	}
	passenger = 0 ;
	while (passenger < n)
	{
		sort (v.begin() , v.end()) ;
		maxmoney += v[m-1] ;
		--v[m-1] ;
		++passenger ;
	}
	cout << maxmoney << ' ' << leastmoney ;
}

int main()
{
	fast 
	int t = 1 ;
//	cin >> t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
