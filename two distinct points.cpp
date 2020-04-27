#include<bits/stdc++.h>

using namespace std ;

typedef long long int ll ;
typedef long double ld ;

#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mp make_pair
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

int solve (int testcase)
{
	long l1 , r1 , l2 , r2 ;
	cin >> l1 >> r1 >> l2 >> r2 ;
	if (l1 == r2)
	   cout << l1 << ' ' << l2 << '\n' ;
	else
	   cout << l1 << ' ' << r2 << '\n' ;	     
}

int main()
{
	fast 
	int t = 1 ;
	cin>>t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
