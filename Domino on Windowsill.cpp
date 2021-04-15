

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
const int mod2=2147483647; ///2^31-1
const int M=500005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,k1,k2;cin>>n>>k1>>k2;
        ll w,b;cin>>w>>b;

        ll x=(k1+k2);
        //if(k1!=0 and k2!=0) x=(k1+k2);
        //else x=k1+k2;

        ll y=(n-k1)+(n-k2);

        //if(k1!=n and k2!=n) y=(n-k1)+(n-k2);
       // else y=(n-k1)+(n-k2);

        if(x>=2*w and y>=2*b) cy;
        else cn;


    }

    return 0;

}



