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
	int n , change = 0 ,count25 = 0 , count50 = 0 ;
	cin >> n ;
	vi v (n+1) ;
	Fi(i , 1 , n)
	    cin >> v[i] ;
	if (v[0] == 100 || v[0] == 50)
	{
		cout << "NO" ;
		R ;
	}
	Fi(i , 1 , n)
	{
		if (v[i] == 25)
		{
			++count25 ;
		}
		else if (v[i] == 50)
		{
			if (count25)
			{
				++count50 ;
				--count25 ;
			}
			else
			{
				cout << "NO" ;
				R ;
			}
		}
		else
		{
			if ((count25 && count50))
			{
				--count25 ;
				--count50 ;
			}
			else if (count25 >= 3)
			{
				count25 -= 3 ;
			}
			else
			{
				cout << "NO" ;
				R ;
			}
		}
	}
	cout << "YES" ;
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
