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

int solve (int testcase)
{
	int s , n ;
	cin >> s >> n ;
	vpii v (n) ;
	Fi(i , 0 , n-1)
	   cin >> v[i].F >> v[i].S ;
	sort (v.begin() , v.end()) ;
	Fi(i , 0 , n-1)
	{
		if (s <= v[i].F)
		{
			cout << "NO" ;
			return 0 ;
		}
		else
		{
			s += v[i].S ;
		}
		
	}
	cout << "YES" ;
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
