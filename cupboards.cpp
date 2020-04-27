#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n , l , r , lzero = 0 , lone = 0 , rzero = 0 , rone = 0, t = 0 ;
	cin>>n;
	for (int i = 0 ; i < n ; i++)
	{
		cin>>l>>r;
		if (l == 0)
		 lzero++ ;
		else 
		 lone++ ; 
		if (r == 0)
		 rzero++ ;
		else 
		 rone++;   
	}
	if (lzero > lone)
	  t += lone;
	else
	  t += lzero;
	if (rzero > rone)
      t += rone;
	else
	  t += rzero; 
	cout<<t;
	return 0;     
}
