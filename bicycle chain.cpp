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
	int n , m , ans = 0 , large = INT_MIN , div = 1 ;
	cin >> n ;
	vi v1 (n+1) ; 
	Fi(i , 1 , n)
	   cin >> v1[i] ;
	cin >> m ;
	vi v2 (m+1) ;
	Fi(j , 1 , m)
	   cin >> v2[j] ;
	Fi(i , 1 , n)
	{
		Fi(j , 1 , m)
		{
			if (v2[j] % v1[i] == 0)
			{
				div = v2[j] / v1[i] ;
				if (div > large)
				{
					large = div ;
				}
			}
		}
	}
	Fi(i , 1 , n)
	{
		Fi(j , 1 , m)
		{
			if (v2[j] % v1[i] == 0)
			{
				div = v2[j] / v1[i] ;
				if (div == large)
				{
					++ans ;
				}
			}
		}
	}
	cout << ans ;
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
