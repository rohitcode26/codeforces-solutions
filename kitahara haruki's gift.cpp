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
	int n , num , count100 = 0 , count200 = 0 ;
	cin >> n ;
	Fi(i , 1 , n)
	{
		cin >> num ;
		if (num == 100)
		   ++count100 ;
		else
		   ++count200 ;
	}
	if (count200 == 1 && count100 == 0)
	{
		cout << "NO" ;
		return 0 ;
	}
	if (count200 % 2 && count100 == 0)
	{
		cout << "NO" ;
		return 0 ;
	}
	if (count100 % 2 == 0 && count200 % 2 == 0)
	   cout << "YES" ;
	else if (count100 % 2 && count200 % 2)
	   cout << "NO" ;
	else if (count100 % 2 && count200 % 2 == 0)
	   cout << "NO" ;
	else if (count100 % 2 == 0 && count200 % 2)
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
