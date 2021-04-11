

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
    ll n;cin>>n;
    for(i=0;i<n;i++) cin>>a[i];

    ll k;cin>>k;

    for(i=0;i<k;i++)
    {
        ll x;cin>>x;

        ll l=0,h=n-1,ans=-1;
        while(l<=h)
        {
            ll mid=(l+h)/2;
            if(a[mid]<x) l=mid+1;
            else if(a[mid]>x) h=mid-1;
            else if(a[mid==x])
            {
                ans=mid;break;
            }
        }

        cout<<ans<<" ";
    }

    return 0;

}



