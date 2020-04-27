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
	int n ;
	cin >> n ;
	int a= -1 , b= -1 , c= -1 ;
	for (int i = 2 ; i*i <= n ; i++)
	{
		if (n % i != 0)
		   continue ;
		a = i ;
		n /= a ;
		break ;
	}
	for (int i = 2 ; i*i <= n ; i++)
	{
		if (n % i != 0 || i == a)
		   continue ;
		b = i ;
		n /= b ;
		break ;
	}
	c = n ;
	if (a != b && b != c && a != c && a >= 2 && b > 2 && c > 2)
	   cout << "YES" << '\n' << a << ' ' << b << ' ' << c << '\n' ;
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
