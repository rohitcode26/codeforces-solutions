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

void solve (int testcase)
{
	int count = 0 ;
	bool flag = false ;
	string a , b ;
	cin >> a >> b ;
	int lena = a.size() ;
	int lenb = b.size() ;
	if (lena != lenb)
	{
		cout << "NO" ;
		R ;
	}
	if (a == b)
	   flag = true ;
	Fi(i , 0 , lena-1)
	{
		if (a[i] != b[i])
		   ++count ;
	}
	sort (a.begin() , a.end()) ;
	sort (b.begin() , b.end()) ;
	if (a != b)
	{
		cout << "NO" ;
		R ;
	}
	if (count != 2)
	{
		cout << "NO" ;
		R ; 
	}
	else
	    flag = true ;
	if (flag)
	    cout << "YES" ;
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
