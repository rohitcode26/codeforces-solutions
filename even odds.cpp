#include<bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long n , k , i , j ; 
	cin>>n>>k ;

    if (k <= (n+1) / 2)
    {
    	cout<<k * 2 - 1 ;
	}
	else 
	{
		cout<<(k- (n+1) / 2) * 2 ;
	}
	return 0 ;
}
	
