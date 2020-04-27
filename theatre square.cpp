#include<bits/stdc++.h>

using namespace std ;

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
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
	unsigned long long n , m , a , stones ;
	cin >> n >> m >> a ;
	if (n % a == 0 && m % a == 0)
	   stones = (n/a)*(m/a) ;
	else if (n % a == 0 && m % a != 0)
	   stones = (n/a)*((m/a)+1) ;
	else if (n % a != 0 && m % a == 0)
	   stones = ((n/a)+1)*((m/a)) ;
	else 
	   stones = ((n/a)+1)*((m/a)+1);
	cout << stones ;   
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
