#include<bits/stdc++.h>

using namespace std ;

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
	string a , b ;
	int i = 0 , j = 0 ;
	cin >> a ;
	Fi(i , 0 , a.length()-1)
	{
		char ch = a[i] ;
		if (ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O'|| ch == 'U'|| ch == 'Y'|| ch == 'a' || ch == 'e' 
		|| ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
		   continue ;
		else
		{
			if (isupper(ch))
				ch = tolower(ch) ;
			b.resize(b.size()+2) ;
			b[j] = '.' ;
			b[j+1] = ch ;
			j += 2 ;
		}  
	} 
	Fi(i , 0 , b.length())
	cout << b[i] ;
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
