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
	int n , count = 0 ;
	cin >> n ;
	string s ;
	vpii v (n+1) ;
	Fi(i , 1 , n)
	   cin >> v[i].F >> v[i].S ;
	sort (v.begin() , v.end()) ;
	v[0].F = 0 ; 
	v[0].S = 0 ;
 	Fi(i , 1 , n)
	{
		if (v[i].F == v[i-1].F)
		{
			Fi(j , 1 , v[i].S - v[i-1].S)
			   s += 'U' ;
		}
		else if (v[i].S == v[i-1].S)
		{
			Fi(j , 1 , v[i].F - v[i-1].F)
			   s += 'R' ;
		}
		else if (v[i].F > v[i-1].F && v[i].S > v[i-1].S)
		{
			Fi(j , 1 , v[i].F - v[i-1].F)
			   s += 'R' ;
			Fi(j , 1 , v[i].S - v[i-1].S)
			   s += 'U' ;
		}
		else
		{
			cout << "NO" << '\n' ;
			return 0 ;
		}
		count++ ;
	}
	if (count == n) 
		cout << "YES" << '\n' << s << '\n' ;
	else
	   cout << "NO" << '\n' ;
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
