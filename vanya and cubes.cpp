#include<bits/stdc++.h>

using namespace std ;

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

void solve (int testcase)
{
	int n ;
	cin >> n ;
	int height = 0 , i , newlevel = 0 ;
	
	for(i = 1 ; ; i++)
	{
		n -= newlevel ;
		newlevel += i ;
		if (newlevel <= n)
		   height++ ;
	    else 
	       break ;
		
	}
	cout << height ;
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
