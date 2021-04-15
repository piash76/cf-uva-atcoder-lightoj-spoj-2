

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

ll x[M],y[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        for(i=0;i<n;i++) cin>>x[i]>>y[i];

        sort(x,x+n);sort(y,y+n);

        ll ans;
        if(n%2)
        {
            ans=1;
        }
        else
        {
            ll x1=x[n/2]-x[n/2-1]+1;
            ll y1=y[n/2]-y[n/2-1]+1;

            ans=x1*y1;

        }

        cout<<ans<<"\n";




    }

    return 0;

}



