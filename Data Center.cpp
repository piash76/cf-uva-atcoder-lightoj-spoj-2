#include<bits/stdc++.h>
#define ll long long

using namespace std;

int prime(ll a)
{
    ll f=1,i,r;
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            f=0;
            break;
        }
    }
    if(f) return 1;
    else return 0;
}
int main()
{
    ll n;
    double s,r,y;
    int mini=INT_MAX;
    cin>>n;
    s=sqrt(n);
    r=ceil(s)-s;
    if(r==0)
    {
        cout<<4*s<<endl;
    }
    else if(prime(n))
    {
       cout<<2*(n+1)<<endl;
    }
    else
    {

       for(int i=1;i<=n;i++)
       {
           if(n%i==0)
           {
               int y=n/i;
               mini=min(mini,2*(i+y));
           }
       }

       cout<<mini<<endl;
    }



    return 0;
}
