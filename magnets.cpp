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
	int n , i , changes = 0 ;
	cin >> n ;
	vi v (n+1) ;
	Fi (i , 1 , n)
	   cin >> v[i] ;
	if (n == 1)
	{
	    cout << 1 ;
	    return 0 ;
	}
	Fi(i , 1 , n-1)
	{
		if (v[i+1] == v[i])
		   continue ;
		else
		   changes ++ ;
	}
	cout << changes + 1 ;
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
