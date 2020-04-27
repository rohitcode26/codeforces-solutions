#include<bits/stdc++.h>

using namespace std ;

#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
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
#define Fi(i,L,R) for (long long i = L; i <= R; i++)
#define Fd(i,R,L) for (long long i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

/*// SEIVE OF ERATOSTHENES ::::
	
	int N = 100000000 ;
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

/*  //TO COUNT NO. DIVISORS OF 'N' ::

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
	const long long modulo = 1073741824 ;
	long long a , b , c ;
	cin >> a >> b >> c ;
	unsigned long long sum = 0 ;
	vi no_of_div (1000000+1) ;
	Fi(i , 1 , 1000000+1)   // efficient way to count number of divisors of any element in range 1 to 1000000
	{
		for (int j = 1 ; j*i <= 1000000+1 ; j++)
		{
			++no_of_div[i*j] ;
		}
	}
	Fi(i , 1 , a)
	{
		Fi(j , 1 , b)
		{
			Fi(k , 1 , c)
			{
				long long d = i*j*k ;
				sum += no_of_div[d] ;
				sum %= modulo ;
			}
		}
	}
	cout << sum ;
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
