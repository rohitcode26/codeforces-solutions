#include<bits/stdc++.h>

using namespace std;

int main()
{
	int j, year, copy, d[4];
	cin>>year;
    for(int i=year+1; ; i++)
	{
	   copy = i;
	   j = 0;
	   while (copy>0)
       {
       	 d[j] = copy%10;
       	 copy/=10;
       	 j++;
	   }
       if ((d[0] != d[1])&&(d[0] != d[2])&&(d[0] != d[3])&&(d[1] != d[2])&&(d[1] != d[3])&&(d[2] != d[3]))
       {
       	 cout<<i;
       	 break;
	   }
    }
	return 0;	
}
