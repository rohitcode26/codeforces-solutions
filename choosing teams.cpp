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
	int n , k , person = 0 ;
	cin >> n >> k ;
	vi v (n+1) ;
	Fi (i , 1 , n)
	   cin >> v[i] ;
	Fi (i , 1 , n)
	{
       v[i] += k ;
       if (v[i] <= 5)
           ++person ;
    }
	if (person <= 2)
	   cout << 0 ;
    else 
       cout << person/3 ;
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
