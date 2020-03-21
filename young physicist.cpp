#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, sumx = 0, sumy = 0, sumz = 0, x[100], y[100], z[100];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>x[i]>>y[i]>>z[i];
		sumx += x[i];
		sumy += y[i];
		sumz += z[i];
	}
	if ((sumx == 0)&&(sumy == 0)&&(sumz == 0))
	  cout<<"YES";
	else 
	  cout<<"NO";
}
