#include<bits/stdc++.h>
using namespace std ;
#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,L,R) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int solve(int testcase)
{
	int n , i , j , pos , k = 0;
	cin >> n ;
	string s ;
	cin >> s ;
	if (n == 1) 
	{
		cout << 0 ;
		return 0 ;
	}
	Fi(i , 0 , s.size()-2)
	{
		if (s[i] != '@')
		{
			Fi(j , i+1 , s.size()-1)
		    {
			    if (s[i] != s[j])
				    break ;
			    else
			    {
			    	s[j] = '@' ;
			    	k++ ;
				}
		    }
		}
		else
		    continue ;
	}
	cout << k ;
}

int main()
{
	fast 
	int t = 1 ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
