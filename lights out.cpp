#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
    cin.tie(0) ;
    cout.tie(0) ;
    
    vector <vector <int> > v (5 , vector <int> (5 , 0)) ;
    vector <vector <int> > res (5 , vector <int> (5 , 1)) ;
    for (int i = 1 ; i < 4 ; i++)
      for (int j = 1 ; j < 4 ; j++)
        cin>>v[i][j] ; 
        
    for (int i = 1 ; i < 4 ; i++)
    {
	   for (int j = 1 ; j < 4 ; j++)    
       {
       	  if (v[i][j] % 2 == 1) 
       	  {
             res[i][j] ^= 1 ;
			 res[i+1][j] ^= 1 ;
			 res[i-1][j] ^= 1 ;
			 res[i][j+1] ^= 1 ;
			 res[i][j-1] ^= 1 ;  		
		  }
		  else
		     continue ;
	   } 
	}
	
    for (int i = 1 ; i < 4 ; i++)
	{
	   for (int j = 1 ; j < 4 ; j++)    
 	     cout<<res[i][j] ;
 	   cout<<'\n' ;
	}
	return 0 ;
}
