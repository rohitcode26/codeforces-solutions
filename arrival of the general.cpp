#include<bits/stdc++.h>

#define swap(x,y) x=x+y; y=x-y; x=x-y; 

using namespace std;

int main()
{
	int n, a[100] , count = 0 , large , small , poslarge = 0 , possmall = 0;
	cin>>n;
	for (int i = 0 ; i < n; i++)
		cin>>a[i];
	small = a[0];			
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] <= small)
		  {
		    small = a[i];
            possmall = i;
		  }
	}
	for (int i = possmall ; i < n-1; i++)
	{
		  swap(a[i],a[i+1]);
	      count++;    	
	}	
	large = a[0];
	for (int i = 0 ; i < n ; i++)
    {
		if (a[i] > large)
		{
		    large = a[i];
		    poslarge = i;
		}
    }
	for (int i = poslarge ; i > 0  ; i--)
	{
			swap(a[i],a[i-1]);
			count++;	
	}
	cout<<count;
	return 0;	
}
