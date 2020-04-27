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
	long long t , sx , sy , ex , ey , flag = 0 , ans ;
	cin >> t >> sx >> sy >> ex >> ey ;
	string s ;
	cin >> s ;
	Fi(i  , 0 , t-1)
	{
		if (sx < ex)
		{
			if (s[i] == 'E')
			   ++sx ;
		}
		else if (sx > ex)
		{
			if (s[i] == 'W')
			   --sx ;
		}
		if (sy > ey)
		{
			if (s[i] == 'S')
			   --sy ;
		}
		else if (sy < ey)
		{
			if (s[i] == 'N')
			   ++sy ; 
		}
		if (sx == ex && sy == ey)
		{
			ans = i+1 ;
			flag = 1 ;
			break ;
		}
	}
	if (flag)
	   cout << ans ;
	else
	   cout << -1 ;
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
