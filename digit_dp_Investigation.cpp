

///lightoj investigation

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

ll ar[20];
ll dp[20][90][90][2];
ll n;

ll k;

ll solve(ll pos,ll sum,ll mod,bool flag)
{
    if(pos>n)
    {
         return (sum%k==0 and mod==0);


    }
    if(dp[pos][sum][mod][flag]!=-1) return dp[pos][sum][mod][flag];

    ll lim=9;
    if(!flag) lim=ar[pos];


    ll s=0;
    for(ll i=0;i<=lim;i++)
    {
        if(flag or i<lim) s+=solve(pos+1,sum+i,(mod*10+i)%k,true);
        else
        {
            s+=solve(pos+1,sum+i,(mod*10+i)%k,false);
        }

    }

    return dp[pos][sum][mod][flag]=s;
}



int main()
{

    ll t,i,j,cas=0;

    scanf("%lld",&t);
    while(t--)
    {

        char s1[20],s2[20];
        scanf("%s %s",s1,s2);

        scanf("%lld",&k);

        ll ans;
        if(k>=90)
        {
            ans=0;///sum of digits can never be greater than 90
        }
        else
        {



        ll sz1=strlen(s1);
        ll sz2=strlen(s2);


        memset(dp,-1,sizeof(dp));
        n=sz2;
        ll idx=1;
        for(i=0;i<n;i++) ar[idx++]=s2[i]-'0';

        ll ansr=solve(1,0,0,false);

        //cout<<"ANSR "<<ansr<<endl;


        ll num=0,sum=0,c=1;
        for(i=sz1-1;i>=0;i--)
        {
            num+=(s1[i]-'0')*c;
            c*=10;
            sum+=s1[i]-'0';
        }

       // cout<<"NUM "<<num<<" sum "<<sum<<endl;

        ll f;
        if(num%k==0 and sum%k==0) f=1;
        else f=0;




        memset(dp,-1,sizeof(dp));
        n=sz1;
        idx=1;
        for(i=0;i<n;i++) ar[idx++]=s1[i]-'0';

        ll ansl=solve(1,0,0,false);



        ans=ansr-ansl+f;

        }


        printf("Case %lld: ",++cas);
        printf("%lld\n",ans);

    }


    return 0;

}





