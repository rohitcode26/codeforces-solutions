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
	int n , i , j;
	cin>>n ;
	vii v(n , vi (n)) ;
	if (n == 1)
	  cout << 1 ;
	else
    {
	  Fi(i , 0 , n-1)
	  {
	    v[i][0] = 1 ;
	    v[0][i] = 1 ;
      }
      Fi(i , 1 , n-1)
      {
    	Fi(j , 1 , n-1)
    	{
    		v[i][j] = v[i][j-1] + v[i-1][j] ;
		}
	  }  
	  cout<<v[n-1][n-1] ;
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
