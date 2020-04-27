#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n , count = 0 , ques = 0 ;
	vector <vector <int> > v (1000, vector <int> (3)) ;
	cin>>n;
	for (int i = 0 ; i < n ; i++)
	{
		count = 0 ;
		for (int j = 0 ; j < 3 ; j++)
		{
			cin>>v[i][j] ;
			if (v[i][j] == 1)
			  count ++ ;
		}
		if (count > 1)
		  ques++ ;
	}
	
	cout<<ques;
	return 0;
}
