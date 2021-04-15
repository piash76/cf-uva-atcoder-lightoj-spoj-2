#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i,j,t,evn,odd,w;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      cin>>w;
      if(w%2!=0)
      {
          printf("Case %ld: Impossible\n",i);
          continue;
      }
      evn=2;
      odd=w/2;
      //printf("Case %lld: %lld %lld\n",i,evn,odd);
      while(odd%2==0)
      {

          evn*=2;
          odd=w/evn;
      }

       printf("Case %lld: %lld %lld\n",i,odd,evn);
    }
}
