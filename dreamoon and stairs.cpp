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
	int n , m , move2  = 0 , move1 = 0 , ans = 0 ;
	cin >> n >> m ;
	if (n < m)
	   ans = -1 ;
	else
	{
		if (n % 2 == 0 )
		{
			move2 = n/2 ;
		    if (move2 % m == 0)
			{
				cout << move2 ;
				return 0 ;
			}
		}
		else
		{
			move2 = n / 2 ;
			move1 = 1 ;
		}
		while (1)
		{
			if ((move2 + move1) % m == 0)
			{
				ans = move2 + move1 ;
				break ;
			}
			move2 -- ;
			move1 += 2 ;
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
