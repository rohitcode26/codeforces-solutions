#include<bits/stdc++.h>

using namespace std ;

#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mp make_pair
#define PI 3.141592653589793
#define MOD 1000000007

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


/*// SEIVE OF ERATOSTHENES ::::
	
	int N = 100000000 ;
	vb is_prime (N+1) ;
	Fi(i , 0 , N)
		is_prime[i] = true ;
	is_prime[0] = false ;
	is_prime[1] = false ;
	int end = sqrt (N) ; 
	for (int i = 2 ; i <= end ; i++)
	{
		if (is_prime[i])
		{
			for (int j = i ; j <= N ; j += i)
			{
				is_prime[i*j] = 0 ;
			}
		}
	}*/

/*  TO COUNT NO. DIVISORS OF 'N' ::

int no_of_div (int n)
{
	int count = 0 ;
	Fi(i , 1 , sqrt(n))
	{
		if (n % i == 0)
		    ++count ;
	}
	int root = sqrt(n) ;
	if (n == root*root)
	   return 2*count - 1 ;
	else
	   return 2*count ;
}*/


void solve (int testcase)
{
	int n , sum1 = 0 , sum2 = 0 ;
	cin >> n ;
	vpii v (n+1) ;
	Fi(i , 1 , n)
	{
		cin >> v[i].F >> v[i].S ;
		sum1 += v[i].F ;
		sum2 += v[i].S ;
	}
	if (sum1 % 2 == 0 && sum2 % 2 == 0)
	{
		cout << 0 ;
		R ;
	}
	else if ((sum1 % 2 && sum2 % 2 == 0) || (sum2 % 2 && sum1 % 2 == 0))
	{
		cout << -1 ;
		R ;
	}
	else
	{
		Fi (i , 1 , n)
		{
			if ((v[i].F % 2 && v[i].S % 2 == 0) || (v[i].S % 2 && v[i].F % 2 == 0))
			{
				cout << 1 ;
				R ;
			}
		}
	}
	cout << -1 ;
}

int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast 
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
