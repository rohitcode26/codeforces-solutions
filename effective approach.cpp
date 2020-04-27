#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
    cin.tie(0) ;
    cout.tie(0) ;
    
	int i , j , n , m , value ;
	long long boy1 = 0 , boy2 = 0 ;
	cin>>n ;
	vector <int> v (n + 1) ;
	for (i= 1 ; i <= n ; i++)
	   cin>>v[i] ;
	vector <int> mapped (n + 1);   
	for (i= 1 ; i <= n ; i++)  
	   mapped[v[i]] = i ;
	cin>>m ;
	for (j = 1 ; j < m+1 ; j++)
	{
	   cin>>value ;
	   boy1 += mapped[value] ; 
	   boy2 += n+1 - mapped[value] ;
    }
	cout<<boy1<<' '<<boy2;
	return 0 ;     
	
}
