#include<bits/stdc++.h>
 
using namespace std ;
 
#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mod1 1000000007
 
#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vs vector <string>
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
	vs v (4) ;
	Fi(i , 0 , 3)
	   cin >> v[i] ;
	Fi(i , 0 , 2)
	{
		Fi(j , 0 , 2)
		{
			if (v[i][j] == v[i+1][j+1] && v[i][j] == v[i+1][j] && v[i][j] == v[i][j+1])
			{
				cout << "YES" ;
				return 0 ;
			}
			else if (v[i+1][j] == v[i][j+1] && v[i+1][j] == v[i+1][j+1] && v[i][j+1] == v[i+1][j+1])
			{
				cout << "YES" ;
				return 0 ;
			}
			else if ((v[i][j] == v[i+1][j+1] && v[i][j] == v[i+1][j]) || (v[i][j] == v[i+1][j] && v[i][j] == v[i][j+1]) || (v[i][j] == v[i][j+1] && v[i][j] == v[i+1][j+1]))
			{
				cout << "YES" ;
				return 0 ;
			}
		}
	}
	cout << "NO" ;
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
