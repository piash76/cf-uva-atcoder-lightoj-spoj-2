#include<bits/stdc++.h>
using namespace std;

int n,m,a[1012];

int chek(int cap)
{
    int i=1,c=0,k=1;
    for(i=1;i<=n;i++)
    {
        if(a[i]>cap) return 0;
        if(c+a[i]>cap)
        {
            k++;
            c=0;
        }
        c+=a[i];
        if(k>m) return 0;
    }
    return 1;


}

int main()
{
    int i,j,low,high,ans,mid,cas=0,s;
    while(cin>>n>>m)
    {
        s=0;
        ans=0;
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
           s+=a[i];
       }
       low=0,high=s;
       while(low<=high)
       {
       mid=(low+high)/2;
       //cout<<mid<<endl;
       if(chek(mid)==0) low=mid+1;
       else
       {
         ans=mid;
         high=mid-1;
       }
       }

       cout<<"Case "<<++cas<<": "<<ans<<endl;

    }
}

