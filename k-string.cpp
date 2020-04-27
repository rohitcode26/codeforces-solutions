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
	int k , count = 0 ;
	cin >> k ;
	string s ;
	cin >> s ;
	int len = s.length() ;
	vi bucket (26) ;
	Fi (i , 0 , len-1)
	   ++bucket[s[i] - 'a'] ;
	Fi(i , 0 , 25)
	{
		if (bucket[i] % k == 0)
		   ++count ;
		else if (bucket[i] == 0)
		   continue ;
		else
		{
			cout << -1 ;
			return 0 ;
		}
	}
	string ans = "" ;
	Fi(i , 0 , 25)
	{
		if (bucket[i] == 0)
		   continue ;
		else
		{
			int occur = bucket[i] / k ;
			Fi(a , 1 , occur)
			{
				char ch = i + 97 ;
				ans += ch ;
			}
		}
	}
	Fi(i , 1 , k)
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
