
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long


using namespace std;


///how many numbers from 1 to r is divisivle by k

ll ar[12];
ll n;
ll dp[12][90][2];



ll k;
ll solve(ll pos,ll mod,bool flag)  ///complexity will be pos*sum*2
{
    ///cout<<"POS "<<pos<<" SUM "<<sum<<" flag "<<flag<<endl;

    if(pos>n)
    {
        return (mod==0);

    }

    if(dp[pos][mod][flag]!=-1) return dp[pos][mod][flag];

    ll lim=9;
    if(flag==false) lim=ar[pos];

    ///cout<<"Lim "<<lim<<endl;


    ll s=0;
    for(ll i=0;i<=lim;i++)
    {
        ///295 for n=345 ///309
        if(flag) s+=solve(pos+1,(mod*10+i%k),true); ///meaning before this we were using all numbers whose digits were less than the required limit
        else if(i<lim)
        {
            s+=solve(pos+1,(mod*10+i%k),true);
        }
        else
        {
            s+=solve(pos+1,(mod*10+i%k),false);
        }

    }

    return dp[pos][mod][flag]=s;
}


int main()
{

    flash()
    ll i,j,t,cas=0;
    cin>>t;

    while(t--)
    {

    memset(dp,-1,sizeof(dp));

    string num;cin>>num;
    cin>>k;

    n=num.size();
    ll idx=1;
    for(i=0;i<n;i++)
    {
        ar[idx++]=num[i]-'0';
    }

    //for(i=1;i<=n;i++) cout<<ar[i]<<" ";
   // cout<<endl;

    ll ans=solve(1,0,false);
    cout<<ans<<endl;

    }





}





