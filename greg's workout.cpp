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
	int n , i , bicep = 0 , chest = 0 , back = 0 ;
	cin >> n ;
	vi v (n+1) ;
	Fi(i , 1 , n)
	{
		cin >> v[i] ;
		if (i % 3 == 1)
		   chest += v[i] ;
		else if (i % 3 == 2)
		   bicep += v[i] ;
		else
		   back += v[i] ;   
	}
	int most = max(max(chest , bicep) ,  back) ;
	if (most == chest)
	   cout << "chest" ;
	else if (most == bicep)
	   cout << "biceps" ;
	else
	   cout << "back" ;
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
