

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long

using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=500005;

inline void normal(ll &a) { a %= mod; if(a<0) a+=mod; }
inline ll modAdd(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a + b) % mod; }

ll dp[11][200005];

ll solve(ll d,ll m)
{
    if(m==0)
    {
        return 1;
    }

    if(dp[d][m]!=-1) return dp[d][m];

    ll s=0;

    if(d<9) s=modAdd(s,solve(d+1,m-1));
    else s=modAdd(s,modAdd(solve(1,m-1),solve(0,m-1)));

    return dp[d][m]=s;

}


int main()
{

   memset(dp,-1,sizeof(dp));

    ll t,i,j;
    scanf("%lld",&t);

    while(t--)
    {
        char n[11];
        ll m;
        scanf("%s %lld",&n,&m);

        ll ans=0;

        for(i=0;i<strlen(n);i++)
        {
            ans=modAdd(ans,solve(n[i]-'0',m));
        }


        printf("%lld\n",ans);



    }

    return 0;

}



