
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>



using namespace std;

#define ll long long


//ll a[maxn];

/// if n==3 then output will be 1 to 999 digit sum

ll n;
ll dp[20][200];

ll solve(ll pos,ll sum)    ///10^L without dp
{
    if(pos>n) return sum;

    if(dp[pos][sum]!=-1) return dp[pos][sum];

    ll s=0;
    for(ll i=0;i<=9;i++)
    {
        s+=solve(pos+1,sum+i);
    }

    return dp[pos][sum]=s;
}


int main()
{

    flash()
    ll i,j,k,t,cas=0;
    cin>>t;

    while(t--)
    {

    memset(dp,-1,sizeof(dp));

    cin>>n;
    ll ans=solve(1,0);
    cout<<ans<<endl;

    }




    see_you;
}




