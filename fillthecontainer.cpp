#include<bits/stdc++.h>
using namespace std;

long long a[1005],n,m;

bool con(long long cp){

}

int main()
{
    long long l,h,i,j,mid,g,ans,t;
    cin>>t;

   for(g=1;g<=t;g++)
   {

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    l=1,h=1000000;


    while(l<=h)
    {
     mid=(l+h)/2;

     if(con(mid))
     {
         ans=mid;
         h=mid-1;
     }
     else
     {
         l=mid+1;
     }


   }

   printf("Case %d: %lld\n",g,ans);

   }



}
