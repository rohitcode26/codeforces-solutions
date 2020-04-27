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
#define line cout << '\n' 

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
	int n , count = 0 ;
	cin >> n ;
	vpll v (n+1) ;
	Fi(i , 1 , n)
	{
		cin >> v[i].F >> v[i].S ;
	}
	sort (v.begin() , v.end()) ;
	Fi(i , 1 , n-1)
	{
		if (v[i].S > v[i+1].S)
		{
			cout << "Happy Alex" ;
			return 0 ;
		}
	}
	cout << "Poor Alex" ;
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
