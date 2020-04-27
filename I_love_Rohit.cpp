#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n , a[1000] , count1 , count2 , ans = 0;
	cin>>n;
	for (int i = 0 ; i < n ; i++)
	  cin>>a[i];
	for (int i = 1 ; i < n ; i++)
	{
		count1 = 0 , count2 = 0 ;
		for(int j = 0 ; j < i ; j++)
		{
			if (a[i] > a[j])
			  count1++;
			if (a[i] < a[j])
			  count2++;  
			if ((count1 == i) || (count2 == i))
			  ans++;  
		}
	}
	cout<<ans;
	return 0;
}
