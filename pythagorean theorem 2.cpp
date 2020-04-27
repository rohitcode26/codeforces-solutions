#include<bits/stdc++.h>
using namespace std ;
#define vi vector <int>
#define vii vector <vector <int> >
#define ll long long
#define ull unsigned long long
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,L,R) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void solve(int testcase)
{
	int n , a , b , count = 0 ;
	cin>>n;
	Fi(a , 1 , n)
	{
		Fi(b , a+1 , n)
		{
			int sq = a*a + b*b ;
			int root = sqrt (sq) ;
			if (root > n)
			  break ;
			if (sq == root*root)
 			  count ++ ;
		}
	}
	cout<<count ;
	
}

int main()
{
	fast 
	int t = 1 ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
