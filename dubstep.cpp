#include<bits/stdc++.h>

using namespace std ;

#define pb push_back 
#define pf push_front
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
	int i ;
	string s ;
	string song = "" ;
	cin >> s ;
	for (i = 0 ; i < s.size() ; i++)
	{
		if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' && i < s.size() - 2)
	    {
	    	i += 2 ;
	    	if (song.size() && song.back() != ' ')
	    	   song += ' ' ;
		}
		else
		{
			song += s[i] ;	
		}
	}
	cout << song ;
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
