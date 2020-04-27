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
	int n , i , found = 0 ;
	cin >> n ;
	vector <string> v (n+1) ;
	Fi(i , 1 , n)
	   cin >> v[i] ;
	Fi (i , 1 , n) 
	{
		if (v[i][0] == 'O' && v[i][1] == 'O' )
		{
		    v[i][0] = '+' ;
			v[i][1] = '+' ;
			cout<<"YES"<<'\n' ;
			found = 1 ;
			break ;
	    }
		else if (v[i][3] == 'O' && v[i][4] == 'O')
		{
			v[i][3] = '+' ;
			v[i][4] = '+' ;
			cout<<"YES"<<'\n' ;
			found = 1 ;
			break ;
		}
	}
	if (found == 0)
	   cout<<"NO"<<'\n' ;
	if (found == 1)
	   Fi(i , 1 , n)
	      cout<<v[i]<<'\n' ;      
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
