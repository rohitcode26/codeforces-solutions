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



void solve(int testcase)
{
	int n , m ;
	cin>>n>>m ;
	deque < pair <int , int> > q ;
	int data ;
	Fi(i , 1 , n)
	{
		cin>>data ;
		q.push_back ( make_pair (data , i) ) ;
	}
	while (q.size() > 1)
	{
		auto temp = q.front() ;
		q.pop_front() ;
		temp.first -= m ;
		if (temp.first <= 0) 
		  continue ;
		else
		  q.push_back (temp) ;  
	}
	cout<<q.front().second ;
}

int main()
{
	fast 
	int t = 1 ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
