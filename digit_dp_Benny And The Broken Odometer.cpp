///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long


using namespace std;

const int mod = 1000000007; // 998244353
//const int mod = 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;

const int maxn1 = 111111;


///https://www.youtube.com/watch?v=5ag4kmHVs8k



///
const int maxn = 211111;  ///2e5


///the number of numbers where digit 3 occurs from 1 to n





ll ar[25];
ll n;
ll dp[12][2][2];

ll solve(ll pos,bool flag,bool flag1)
{
    //cout<<"POS "<<pos<<" SUM "<<sum<<" flag "<<flag<<endl;

    if(pos>n)
    {
       // cout<<"TOTAL SUM "<<sum<<endl;
        //return sum;
        if(flag1==true)
        {
           // cout<<"POSSIBLE  "<<sum<<endl;
            return 1;
        }
        else
        {
           // cout<<"SUM2    "<<sum<<endl;
            return 0;
        }
    }

    if(dp[pos][flag][flag1]!=-1) return dp[pos][flag][flag1];

    ll lim=9;
    if(flag==false) lim=ar[pos];


    ll s=0;
    for(ll i=0;i<=lim;i++)
    {
        ///295 for n=345
        if(flag)
        {
           if(i==3 or flag1) s+=solve(pos+1,true,true); ///meaning before this we were using all numbers whose digits were less than the required limit
           else s+=solve(pos+1,true,false);
        }
        else if(i<lim)
        {
            if(i==3 or flag1) s+=solve(pos+1,true,true);
            else s+=solve(pos+1,true,false);
        }
        else
        {
            if(i==3 or flag1) s+=solve(pos+1,false,true);
            else s+=solve(pos+1,false,false);
        }

    }

    return dp[pos][flag][flag1]=s;
}


int main()
{

   // flash()
    ll i,j,k,t,cas=0;
   // cin>>t;

   scanf("%lld",&t);

    while(t--)
    {

    memset(dp,-1,sizeof(dp));

   // string num;cin>>num;
   char num[12];scanf("%s",num);
    n=strlen(num);
    ll idx=1;
    for(i=0;i<n;i++)
    {
        ar[idx++]=num[i]-'0';
    }
    ll no=0;
    for(i=0;i<n;i++) no=no*10+(num[i]-'0');


    ll ans=solve(1,false,false);
   // cout<<ans<<endl;
    //cout<<no-ans<<endl;
    printf("%lld\n",no-ans);

    }





}
