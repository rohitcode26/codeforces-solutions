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

void solve (int testcase)
{
	int n  , i , one = 0 , two = 0 ; 
	cin >> n ;
	vpii v (n+1) ;
	Fi(i , 1 , n)
	{
	    cin >> v[i].first >> v[i].second ;  
	    if (v[i].first > v[i].second)
	       one++ ;
	    else if (v[i].first < v[i].second)   
	       two ++ ;
	}
	if (one > two)
	  cout<<"Mishka";
	else if (one < two)
	  cout<<"Chris";
    else 
      cout<<"Friendship is magic!^^";
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
