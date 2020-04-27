#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[6][6], posi, posj, ways;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cin>>a[i][j];
		    if (a[i][j] == 1)
			{
				posi = i; posj = j;
			}	
		}
	}	

	ways = abs(3-posi)+abs(3-posj);
	cout<<ways;
	return 0;
}
