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
	int n , m , count = 0 ;
	cin >> n >> m ;
	vi v1 ;
	vpii v (n) ;
	Fi(i , 0 , n-1)
	   cin >> v[i].F >> v[i].S ;
	Fi(i , 1 , m)
	{
		int flag = 0 ;
		Fi(j , 0 , n)
		{
			if (i >= v[j].F && i <= v[j].S)
			{
				flag = 0 ;
				break ;
			}
			else
			{
				flag = 1 ;
			}
		}
		if (flag == 1)
		{
			count++ ;
			v1.pb (i) ;
		}
	}
	cout << count << '\n' ;
	if (count)
	{
		Fi(i , 0 , v1.size()-1)
		   cout << v1[i] << ' ' ;
		cout << '\n' ;
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
