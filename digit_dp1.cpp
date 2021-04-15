
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

///https://www.youtube.com/watch?v=T5R6qZAp0u8


///https://www.youtube.com/watch?v=5ag4kmHVs8k



///
const int maxn = 211111;  ///2e5


//ll a[maxn];

/// if n==3 then output will be 1 to 3 digit sum
ll ar[maxn];
ll n;
ll dp[20][200][2];

///from left to right filling the digits

ll solve(ll pos,ll sum,bool flag)  ///complexity will be pos*sum*2
{
    ///cout<<"POS "<<pos<<" SUM "<<sum<<" flag "<<flag<<endl;

    if(pos>n)
    {
        //cout<<"SUM "<<sum<<endl;
        return sum;
    }

    if(dp[pos][sum][flag]!=-1) return dp[pos][sum][flag];

    ll lim=9;
    if(flag==false) lim=ar[pos];

    ///cout<<"Lim "<<lim<<endl;


    ll s=0;
    for(ll i=0;i<=lim;i++)
    {
        ///295 for n=345 ///309
        if(flag) s+=solve(pos+1,sum+i,true); ///meaning before this we were using all numbers whose digits were less than the required limit
        else if(i<lim)
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

    string num;cin>>num;
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




