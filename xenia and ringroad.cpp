#include<bits/stdc++.h>
using namespace std ;
#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define ll long long
#define ull unsigned long long
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,L,R) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void solve(int testcase)
{
	long m , n , i ; 
	ull timetaken = 0 ;
	cin>>n>>m ;
	vl v(m + 1) ;
	Fi(i , 1 , m)
	  cin>>v[i] ;
	timetaken = v[1] - 1 ;  
	Fi(i , 2 , m)
	{
	   	if (v[i] > v[i-1])
	   	  timetaken = timetaken + v[i] - v[i-1] ;
	   	else if (v[i] < v[i-1])
	   	  timetaken = timetaken + n - (v[i-1] - v[i]) ; 
	} 
	cout<<timetaken ;   
	
}

int main()
{
	fast 
	int t = 1 ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
