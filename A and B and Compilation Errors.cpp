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
	int n , i , j , flag1 = 0 , flag2 = 0 , pos1 , pos2 ;
	cin >> n ;
	vi v1(n+1) ;
	vi v2(n) ;
	vi v3(n-1) ;
	Fi (i , 1, n) cin >> v1[i];
	Fi (i , 1, n-1) cin >> v2[i];
	Fi (i , 1, n-2) cin >> v3[i];
	sort (v1.begin() ,v1.end()) ;
	sort (v2.begin() ,v2.end()) ;
	sort (v3.begin() ,v3.end()) ;
	Fi(i , 1 ,n-1)
	{
		if (v1[i] != v2[i])
		{
		    flag1 = 1 ;
		    pos1 = i ;
			break ;
	    }
	}
	if (flag1 == 1)
	   cout << v1[pos1] << '\n';
	else 
	   cout << v1[n] <<'\n' ;   
	Fi (j , 1 , n-2)
	{
		if (v2[j] != v3[j])
		{
			flag2 = 1 ;
			pos2 = j ;
			break ;
		}
    }
		if (flag2 == 1)
			cout << v2[pos2] ;
		else 
		    cout << v2[n-1] << '\n';	
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
