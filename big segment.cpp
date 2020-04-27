#include<bits/stdc++.h>

using namespace std ;

#define F first
#define S second
#define C continue 
#define pb push_back 
#define pf push_front
#define mod1 1000000007

#define vi vector <int>
#define vl vector <long>
#define vb vector <bool>
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

/*// SEIVE OF ERATOSTHENES ::::
	
	vi is_prime (N+1) ;
	Fi(i , 0 , N)
		is_prime[i] = 1 ;
	is_prime[0] = 0 ;
	is_prime[1] = 0 ;
	for (int i = 2 ; i <= sqrt(N) ; i++)
	{
		if (is_prime[i])
		{
			for (int j = 2 ; j*i <= N ; j++)
			{
				is_prime[i*j] = 0 ;
			}
		}
	}*/

void solve (int testcase)
{
	int n , posL = -1 , posR = -2 ; 
	int minL = INT_MAX ; 
	int maxR = INT_MIN ; 
	cin >> n ;
	vi L(n+1) , R(n+1) ;
	Fi(i , 1 , n)
	{
		cin >> L[i] >> R[i] ;
		minL = min (minL , L[i]) ;
		maxR = max (maxR , R[i]) ;
	}
	Fi(i , 1 , n)
	{
		if (L[i] == minL && R[i] == maxR)
		{
			cout << i ;
			return ;
		}
	}
	cout << -1 ;
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
