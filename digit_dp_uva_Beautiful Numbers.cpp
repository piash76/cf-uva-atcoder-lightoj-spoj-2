

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

ll n,base;

ll dp[105][12];


ll solve(ll pos,ll last)
{
    if(pos>=n) return 1;
    if(dp[pos][last]!=-1) return dp[pos][last];

    ll s=0;
    for(ll i=0;i<base;i++)
    {
        if(i==0 and pos==0) continue;

        if(last==0 or abs(last-i)==1)
        {
            s+=solve(pos+1,i);
        }
    }

    return dp[pos][last]=s;

}


int main()
{



    ll t,i,j;
    scanf("%lld",&t);
    while(t--)
    {
       scanf("%lld %lld",&base,&n);

       memset(dp,-1,sizeof(dp));

       ll ans=solve(0,0);

       printf("%lld\n",ans);



    }

    return 0;

}

/*

3
2 4
3 7
10 10

*/





