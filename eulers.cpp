#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll phi(ll n)
{
    ll i,r;
    r=n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
                r-=r/i;
            }
        }
    }
    if(n>1)
    {
        r-=r/n;
    }
    return r;
}

int main()
{
    ll x;
    cin>>x;
    cout<<phi(x)<<endl;
}
