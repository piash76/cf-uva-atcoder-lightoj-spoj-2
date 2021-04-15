

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second




using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=500005;


vector<ll> v;
ll trgt;


bool ok(ll x)
{
    //cout<<"X "<<x<<endl;


    vector<ll> v2;

    for(auto it:v) v2.push_back(it);

    v2.push_back(x);

    sort(v2.begin(),v2.end());

    ll sm=0;
    for(auto x:v2)
    {
        sm+=x;
    }
    auto p=v2.begin();
    auto q=v2.end()-1;

    sm-=(*p);sm-=(*q);

   // cout<<"SUM "<<sm<<" 3 trgt "<<3*trgt<<endl;

    if(sm<=trgt*3)
    {
       /* cy;
        cout<<"X "<<x<<endl;
         cout<<"SUM "<<sm<<" 3 trgt "<<3*trgt<<endl;*/

        return true;
    }
    else return false;
}



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;

    for(i=0;i<4;i++)
    {
        ll x,y;scanf("%lld.%lld",&x,&y);

        ll nm=x*100+y;
        v.push_back(nm);
    }

    ll x,y;scanf("%lld.%lld",&x,&y);
    trgt=x*100+y;



    sort(v.begin(),v.end());

    if(v[1]+v[2]+v[3]<=trgt*3)  printf("infinite\n");
    else
    {
        ll l=100,h=20000,ans=-1;

        while(l<=h)
        {
            ll mid=(l+h)/2;

            if(ok(mid))
            {
               // cout<<"POSSIBLE "<<mid<<endl;

                ans=max(ans,mid);

                l=mid+1;
            }
            else h=mid-1;

        }

        if(ans==-1) printf("impossible\n");
        else
        {
            ll x=ans/100;
            ll y=ans%100;

            if(y<10) printf("%lld.0%lld\n",x,y);
            else printf("%lld.%lld\n",x,y);

        }




    }
















    return 0;

}



