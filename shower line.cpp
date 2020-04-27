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
	int temp = 0 , ans = INT_MIN ;
	vii v (5 , vi (5)) ;
	Fi(i , 0 , 4)
	   Fi(j , 0 , 4)
	      cin >> v[i][j] ;
	vi perm ;
	Fi(i , 0 , 4)
	   perm.pb(i) ;
	do
	{
		temp = 0 ;
		temp += v[perm[0]][perm[1]] + v[perm[1]][perm[0]] + 2*v[perm[2]][perm[3]] + 2*v[perm[3]][perm[2]] + v[perm[1]][perm[2]] +  v[perm[2]][perm[1]] 
		+ 2*v[perm[3]][perm[4]] + 2*v[perm[4]][perm[3]] ;
		if (temp > ans)
		   ans = temp ;
	} while (next_permutation(perm.begin() , perm.end())) ;
	
	cout << ans ;
	
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
