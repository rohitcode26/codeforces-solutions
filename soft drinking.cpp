#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n , k , l , c , d , p , nl , np , liqour , salt , slices , toast;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np ;
	liqour = (k*l)/nl ;
	slices = (c*d) ;
	salt = p/np ;
	if ((liqour <= slices) && (liqour <= salt)) 
	{
		toast = liqour/n ;
		cout<<toast ;
	}
	else if ((salt <= liqour) && (salt <= slices))
	{
		toast = salt/n ;
		cout<<toast ;
	}
	else
	{
		toast = slices/n ;
		cout<<toast ;
	}
	return 0 ;
}
