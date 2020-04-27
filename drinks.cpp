#include<bits/stdc++.h>

using namespace std;

int main()
{
	long double n , a[100] , sum = 0.00000000, percent;
	cin>>n;
	for (int i = 0 ; i < n ; i++)
	{
		cin>>a[i];
		sum += a[i];
    }
	percent = sum/n;
	cout<<percent;
	return 0;
}
