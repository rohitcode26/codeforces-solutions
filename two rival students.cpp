#include<bits/stdc++.h>
using namespace std ;
#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,L,R) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

void solve(int testcase)
{
	int n , x , a , b , space , posdiff;
	cin>>n>>x>>a>>b ;
	   if ((a == 1 && b == 100) || (a == 100 && b == 1))
	    {
	    	posdiff = 99 ;
		}
	   else 
	   {
	     if (a < b)
	     {
	     	space = n - b + a - 1 ;
		 }
		 else
		 {
		 	space = n - a + b - 1 ;
		 }
		 posdiff = abs (a - b) ;
	     if (space >= x) 
	     {
	       posdiff += x ; 
	     }
		 else 
		 {
		   posdiff = n - 1 ;	
		 }
	   }
	cout<<posdiff<<'\n' ;
}

int main()
{
	fast 
	int t = 1 ;
	cin>>t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
