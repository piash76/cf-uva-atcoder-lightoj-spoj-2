#include<bits/stdc++.h>
#define ll long long
#define bye return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int main()
{
    godspeed()
    ll n,i,j,k,l,m;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++) cin>>a[i];
    ll r=a[0];
    for(i=1;i<n;i++)
    {
        r=__gcd(r,a[i]);
    }
    //cout<<r<<endl;
    ll c=0;
    for(i=1;i<=sqrt(r);i++)
    {
        if(r%i==0)
        {
            if(r/i==i)
            {
                c++;
            }
            else
            {
                c+=2;
            }
        }
    }
    cout<<c<<endl;
    bye;

}
