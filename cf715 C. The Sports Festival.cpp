
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
const int M=2005;

ll a[M],dp[M][M];


ll solve(ll lft,ll rt)
{
    if(lft==rt) return 0;

    if(dp[lft][rt]!=-1) return dp[lft][rt];

    ///since we can place min or max at last position

    ll s=a[rt]-a[lft]+min(solve(lft+1,rt),solve(lft,rt-1)); ///meaning solve(lft+1,rt) taking lft element as last element

    return dp[lft][rt]=s;
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;

    ll n;cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);

    memset(dp,-1,sizeof(dp));

    ll ans=solve(1,n);

    cout<<ans<<"\n";


    return 0;

}




