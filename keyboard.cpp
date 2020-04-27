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
	v[1] = "qwertyuiop" ;
	v[2] = "asdfghjkl;" ;
	v[3] = "zxcvbnm,./" ;
	char ch ;
	cin >> ch ;
	string s ;
	cin >> s ;
	Fi(i , 0 , s.size()-1)
	{
		if (ch == 'R')
		{
			Fi(a , 1 , v[1].size()-1)
			{
				if (s[i] == v[1][a])
				{
					s[i] = v[1][a-1] ;
					break ;
				}
				else if (s[i] == v[2][a])
				{
					s[i] = v[2][a-1] ;
					break ;
				}
				else if (s[i] == v[3][a])
				{
					s[i] = v[3][a-1] ;
					break ;
				}
				else
				   continue ;
			}
		}
		else
		{
			Fi(a , 0 , v[1].size()-2)
			{
				if (s[i] == v[1][a])
				{
					s[i] = v[1][a+1] ;
					break ;
				}
				else if (s[i] == v[2][a])
				{
					s[i] = v[2][a+1] ;
					break ;
				}
				else if (s[i] == v[3][a])
				{
					s[i] = v[3][a+1] ;
					break ;
				}
				else
				   continue ;
			}
		}
	}
	cout << s ;
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
