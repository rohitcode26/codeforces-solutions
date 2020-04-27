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
	int n , num ;
	cin >> n ;
	vii v ( 4 , vi() ) ;
	Fi(i , 1 , n)
	{
		cin >> num ;
		v[num].push_back(i) ;
	}
	int least = min(min(v[1].size() , v[2].size()) , v[3].size()) ;
	cout << least << '\n' ;
	if (least == 0)
	   return 0 ;
	Fi(i , 0 , least-1)
	{
		cout << v[1][i] << ' ' << v[2][i] << ' ' << v[3][i] << '\n' ;
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
