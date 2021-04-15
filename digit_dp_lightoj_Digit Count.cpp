

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

ll n,m;
ll ar[15];
ll dp[12][12];


ll solve(ll pos,ll last)
{
   // cout<<"POS "<<pos<<" LAST "<<last<<endl;

    if(pos==n) return 1;

    if(dp[pos][last]!=-1) return dp[pos][last];

    ll s=0;

    for(ll i=0;i<m;i++)
    {
        if(last==0 or (abs(last-ar[i])<=2))
        {
            s+=(solve(pos+1,ar[i]));
        }

    }

    //cout<<"S "<<s<<endl;

    return dp[pos][last]=s;
}


int main()
{

     ll i,j,t,cas=0;
     scanf("%lld",&t);
     while(t--)
     {
         scanf("%lld %lld",&m,&n);

         for(i=0;i<m;i++) scanf("%lld",&ar[i]);

         memset(dp,-1,sizeof(dp));

         ll ans=solve(0,0);
        /* for(i=1;i<=n;i++)
         {
             ans+=solve(i,0);
         }*/

         printf("Case %lld: ",++cas);
         printf("%lld\n",ans);





     }





    return 0;

}





