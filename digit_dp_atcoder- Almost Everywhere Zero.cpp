
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>

#define ll long long


using namespace std;


ll ar[105];
ll n,k;
ll dp[105][105][2];

ll solve(ll pos,ll sum,bool flag)  ///complexity will be pos*sum*2
{
    //cout<<"POS "<<pos<<" SUM "<<sum<<" flag "<<flag<<endl;

    if(pos>n)
    {
        //cout<<"SUM "<<sum<<endl;
        if(sum==k) return 1;
        else return 0;
    }

    if(dp[pos][sum][flag]!=-1) return dp[pos][sum][flag];

    ll lim=9;
    if(flag==false) lim=ar[pos];


    ll s=0;
    for(ll i=0;i<=lim;i++)
    {


        if(flag or i<lim)
        {
            if(i!=0) s+=solve(pos+1,sum+1,true);
            else s+=solve(pos+1,sum,true);

        }
        else
        {
            if(i!=0) s+=solve(pos+1,sum+1,false);
            else  s+=solve(pos+1,sum,false);
        }

    }

    return dp[pos][sum][flag]=s;
}


int main()
{


    ll i,j;

   char num[105];scanf("%s",num);
   scanf("%lld",&k);

    memset(dp,-1,sizeof(dp));


    n=strlen(num);
    ll idx=1;
    for(i=0;i<n;i++)
    {
        ar[idx++]=num[i]-'0';
    }

    //for(i=1;i<=n;i++) cout<<ar[i]<<" ";
   // cout<<endl;

    ll ans=solve(1,0,false);
    //cout<<ans<<endl;
    printf("%lld\n",ans);





}




