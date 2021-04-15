
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;


ll ar[25];
ll n;
ll dp[20][200][2];

ll solve(ll pos,ll sum,bool flag)
{
    //cout<<"POS "<<pos<<" SUM "<<sum<<" flag "<<flag<<endl;

    if(pos>n) return sum;

    if(dp[pos][sum][flag]!=-1) return dp[pos][sum][flag];

    ll lim=9;
    if(flag==false) lim=ar[pos];


    ll s=0;
    for(ll i=0;i<=lim;i++)
    {
        ///295 for n=345
        if(flag) s+=solve(pos+1,sum+i,true); ///meaning before this we were using all numbers whose digits were less than the required limit
        else if(flag or i<lim)
        {
            s+=solve(pos+1,sum+i,true);
        }
        else
        {
            s+=solve(pos+1,sum+i,false);
        }

    }

    return dp[pos][sum][flag]=s;
}


int main()
{

    flash()
    ll i,j,k,t,cas=0;
    cin>>t;

    while(t--)
    {

    memset(dp,-1,sizeof(dp));

     /// char num1[51],num2[51];
   /// scanf("%s %s",num1,num2);

    string num1,num2;
    cin>>num1>>num2;
    if(num1=="-1" and num2=="-1") break;


    /// n=strlen(num2);
    n=num2.size();
    ll idx=1;
    for(i=0;i<n;i++)
    {
        ar[idx++]=num2[i]-'0';
    }
    //for(i=1;i<=n;i++) cout<<ar[i]<<" ";
   // cout<<endl
    ll ansr=solve(1,0,false);
    //cout<<"ANSr "<<ansr<<endl;


    ll x=0;
    n=num1.size();
    for(i=0;i<n;i++) x+=(num1[i]-'0');

   // cout<<"NUM1 "<<num1<<endl;

   memset(dp,-1,sizeof(dp));
  ///  n=strlen(num1);
    n=num1.size();
     idx=1;
    for(i=0;i<n;i++)
    {
        ar[idx++]=num1[i]-'0';
    }
    //for(i=1;i<=n;i++) cout<<ar[i]<<" ";
   // cout<<endl
    ll ansl=solve(1,0,false);

    cout<<ansr-ansl+x<<endl;







   // cout<<ans<<endl;

    }




    see_you;
}






