#include<bits/stdc++.h>

using namespace std ;

#define pb push_back 
#define pf push_front
#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
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

int solve (int testcase)
{
	vi v (6) ;
	int a , b , c ;
	cin >> a >> b >> c ;
	int p = a*b*c ; v.pb(p) ;
	int q = a*b + c ; v.pb(q) ;
	int r = a + b*c ; v.pb(r) ;
	int s = (a+b)*c ; v.pb(s) ;
	int t = a*(b+c) ; v.pb(t) ;
	int u = a + b + c ; v.pb(u) ;
	cout << *max_element(v.begin() , v.end()) ;
	
}

int main()
{
	fast 
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
