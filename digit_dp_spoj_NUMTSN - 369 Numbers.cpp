///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>


#define ll long long


using namespace std;

const int mod = 1000000007;


inline void normal(ll &a) { a %= mod; (a < 0) && (a += mod); }

inline ll modAdd(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a + b) % mod; }
inline ll modSub(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); a -= b; normal(a); return a; }


ll ar[60];
ll n;
ll dp[55][18][18][18][2];  ///[pos] [count3] [count 6] [count 9] [tight]

ll solve(ll pos,ll sum3,ll sum6,ll sum9,bool flag)
{
    //cout<<"POS "<<pos<<" SUM "<<sum<<" flag "<<flag<<endl;

    if(sum3>17 or sum6>17 or sum9>17) return 0;

    if(pos>n)
    {
      if(sum3>=1 and sum3==sum6 and sum6==sum9) return 1;
      else return 0;

    }

    if(dp[pos][sum3][sum6][sum9][flag]!=-1) return dp[pos][sum3][sum6][sum9][flag]%mod;

    ll lim=9;
    if(flag==false) lim=ar[pos];


    ll s=0;
    for(ll i=0;i<=lim;i++)
    {

        if(flag or i<lim)
        {
            if(i==3) s=modAdd(s,solve(pos+1,sum3+1,sum6,sum9,true));
            else if(i==6) s=modAdd(s,solve(pos+1,sum3,sum6+1,sum9,true));
            else if(i==9) s=modAdd(s,solve(pos+1,sum3,sum6,sum9+1,true));
             else s=modAdd(s,solve(pos+1,sum3,sum6,sum9,true));
        }
        else
        {
           if(i==3) s=modAdd(s,solve(pos+1,sum3+1,sum6,sum9,false));
            else if(i==6) s=modAdd(s,solve(pos+1,sum3,sum6+1,sum9,false));
            else if(i==9) s=modAdd(s,solve(pos+1,sum3,sum6,sum9+1,false));
            else s=modAdd(s,solve(pos+1,sum3,sum6,sum9,false));

        }

    }

    return dp[pos][sum3][sum6][sum9][flag]=s%mod;
}


int main()
{


    ll i,j,k,t,cas=0;
    scanf("%lld",&t);
    //memset(dp,-1,sizeof(dp));

    while(t--)
    {

    memset(dp,-1,sizeof(dp));

    char num1[60],num2[60];
    scanf("%s %s",num1,num2);



    n=strlen(num2);
    ll idx=1;
    for(i=0;i<n;i++)
    {
        ar[idx++]=num2[i]-'0';
    }


    ll ansr=solve(1,0,0,0,false);
    //cout<<"ANSr "<<ansr<<endl;


    ll x3=0,x6=0,x9=0;
     n=strlen(num1);
    for(i=0;i<n;i++)
    {
        if(num1[i]-'0'==3) x3++;
        else if(num1[i]-'0'==6) x6++;
        else if(num1[i]-'0'==9) x9++;
    }
    int f=0;
    if(x3==x6 and x6==x9 and x3>=1) f=1;



   memset(dp,-1,sizeof(dp));

   n=strlen(num1);
     idx=1;
    for(i=0;i<n;i++)
    {
        ar[idx++]=num1[i]-'0';
    }


    ll ansl=solve(1,0,0,0,false);
   // cout<<"ANSl "<<ansl<<endl;



    ll ans=0;

    ll s=modSub(ansr,ansl);  ///mod substraction



    ans=modAdd(s,f);     ///mod add


   // cout<<ansr-ansl+x<<endl;
   printf("%lld\n",ans);



    }





}




