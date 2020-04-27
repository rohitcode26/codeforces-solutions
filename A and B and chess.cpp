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
	int i , j , a = 0 , b = 0 ;
	char ch ;
	Fi(i , 1 , 8)
	{
		Fi(j , 1 , 8)
		{
				cin >> ch ;
				if(ch == 'Q')
				   a += 9 ;
				if(ch == 'R')
				   a += 5 ;
				if(ch == 'B' || ch == 'N')
				   a += 3 ;
				if(ch == 'P')
				   a += 1 ;
				if(ch == 'q')
				   b += 9 ;
				if(ch == 'r')
				   b += 5 ;
				if(ch == 'b' || ch == 'n')
				   b += 3 ;
				if(ch == 'p')
				   b += 1 ;
		}
	}
	if (a > b)
	  cout << "White" ;
	else if (a < b)
	   cout << "Black" ;
	else
	   cout << "Draw" ; 
	
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
