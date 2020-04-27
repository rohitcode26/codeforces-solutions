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
	int s , a , h , g ;
	cin >> s >> a >> h ;
    for(int i = 1 ; ; i++)
	{
		if (i % 2 == 1)   // 	simons's chance
		{
		   if (h < __gcd(s,h))
		   {
		   	   cout<<"1" ;
		   	   break ;
		   }
		   g = __gcd(s,h) ;
		   h -= g ;
	    }
	    else   // antisimon's chance
	    {
		   if (h < __gcd(a,h))
		   {
		   	    cout<<"0" ;
		   	     break ;
		   }
		   g = __gcd(a,h) ;
		   h -= g ;      
		}
	}
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
