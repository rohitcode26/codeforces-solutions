#include<bits/stdc++.h>
using namespace std;

void nearlyluckynumber(unsigned long long a)
{
  unsigned long long no_of_dig, count2, count3;
  int d;
  while (a>0)
  {
    d = a%10;
    if ((d== 4) || (d == 7))
    no_of_dig ++;
    a/=10;
  }
  while (no_of_dig>0)
  {
    d = a%10;
    count2 ++;
    if ((d == 4) || (d == 7))
     count3 ++;
    no_of_dig/=10;
  }
  if (count2 == count3)
    cout<<"YES";
  else
    cout<<"NO";
}

int main()
{
  unsigned long long n;
  cin>>n;
  nearlyluckynumber(n);
  return 0;
}
