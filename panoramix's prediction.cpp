#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, fac = 0, count = 0, fac1 = 0;
	cin>>n>>m;
	for (int i=1; i<m; i++)
    {
    	if (m % i == 0)
    	  fac++;
	}
	if (fac == 1)
	{
		count = 0;
		for (int j=n+1 ; j < m ; j++)
		{
			fac1 = 0;
			for (int k=1 ; k<j ; k++)
			{
				if (j%k == 0)
				  fac1++;
			}
			if (fac1 == 1)
			  count++;
		}
		if (count == 0)
		  cout<<"YES";
		else 
		  cout<<"NO";
	}
	else if (fac > 1)
	  cout<<"NO";
	return 0;  
}
