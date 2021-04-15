#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
   ll n,i,j,a,b,c,k,l,t,x,s1,s2,s3,ans,u,v,s4,s5;
   cin>>t;
   while(t--)
   {

       cin>>n>>x>>a>>b;
        j=max(a,b);
        i=min(a,b);
        //cout<<i<<" "<<j<<endl;
        k=j+x;
        l=i-x;
        u=i+x;
        v=j-x;
        //cout<<k<<" "<<l<<endl;
        if(k<=n)
        {
          s1=k-i;
        }
        else
        {
            s1=0;
        }
        if(l>=1)
        {
           s2=j-l;
        }
        else
        {
            s2=0;
        }
        if(u<=n)
        {
            s4=u-j-1;
        }
        else
        {
            s4=0;
        }
        if(v>=1)
        {
            s5=i+1-v;
        }
        else
        {
            s5=0;
        }

        s3=j-i;
        ans=max(s1,max(s2,max(s3,max(s4,s5))));
        cout<<ans<<endl;

   }
     return 0;
}
