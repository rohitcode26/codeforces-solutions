#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n , a[101];
	cin>>n;
	if (n % 2 == 1)
	  cout<<-1;
	else 
	{
	  for (int i = 1 ; i <= n ; i++)
	  {
	     if (i % 2 == 1)
		   a[i] = i+1;
		 else
		   a[i] = i-1; 	
		 cout<<a[i]<<' ';  
	  }	
	  
	}  
	return 0;
}
