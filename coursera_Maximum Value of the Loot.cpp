

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=500005;



bool comp(pll a,pll b)
{
    if(a.ff!=b.ff) return a.ff>b.ff;
    else return a.ss<b.ss;
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll n,cap;cin>>n>>cap;
    vector<pll>vec;

    for(i=0;i<n;i++)
    {
        ll value,weight;cin>>value>>weight;

        vec.push_back({value,weight});
    }

    sort(vec.begin(),vec.end(),comp);

    long double ans=0.0,rem=cap;

    for(i=0;i<n;i++)
    {
        ll val=vec[i].ff;
        ll wt=vec[i].ss;

        if(rem>=0)
        {
            long double d=rem/wt;

            long double s=d*val;

            ans+=s;

            rem-=d;
        }
    }








    return 0;

}



