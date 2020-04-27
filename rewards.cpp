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
	int a1 , b1 , a2 , b2 , a3 , b3 , n , cup , medal ;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n ;
	int suma = a1 + a2 + a3 ;
	int sumb = b1 + b2 + b3 ;
	if (suma % 5 == 0)
		cup = suma / 5 ;
	else
		cup = suma / 5 + 1 ;
	n -= cup ;
	if (sumb % 10 == 0)
	   medal = sumb / 10 ;
	else
	   medal = sumb / 10 + 1 ;
	n -= medal ;
	if (n < 0)
	   cout << "NO" ;
	else
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
