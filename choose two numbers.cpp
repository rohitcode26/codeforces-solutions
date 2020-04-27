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
	int n , m , large1 , large2 ;
	cin >> n ;
	vi va (n) ;
	Fi(i , 0 , n-1)
	   cin >> va[i] ;
	cin >> m ;
	vi vb (m) ;
	Fi(i , 0 , m-1)
	   cin >> vb[i] ;
	large1 = va[0] ;
	large2 = vb[0] ;
	Fi(i , 0 , n-1)
	{
		if (va[i] > large1)
		   large1 = va[i] ;
	}
	Fi(i , 0 , m-1)
	{
		if (vb[i] > large2)
		   large2 = vb[i] ;
	}
	cout << large1 <<  " " << large2 ;
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
