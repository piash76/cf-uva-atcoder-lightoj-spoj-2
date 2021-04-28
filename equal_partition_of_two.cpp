///https://www.geeksforgeeks.org/partition-problem-dp-18/

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

ll a[105],dp[105][200005];

ll solve(ll idx,ll sum) ///subset sum
{
    if(sum==0) return 1;

    if(idx<0 or sum<0) return 0;

    if(dp[idx][sum]!=-1) return dp[idx][sum];

    ll ans=solve(idx-1,sum-a[idx]) || solve(idx-1,sum);

    return dp[idx][sum]=ans;

}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    memset(dp,-1,sizeof(dp));

    ll n;cin>>n;
    ll sm=0;
    for(i=0;i<n;i++) { cin>>a[i];sm+=a[i]; }


        ///if totsum/2 can be formed by subset sum then other part of totsum/2 has to be equal

        ll half=sm/2;
        if(solve(n-1,half))
        {
            cy;

        }



    return 0;

}




