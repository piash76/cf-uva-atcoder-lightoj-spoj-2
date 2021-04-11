
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long


using namespace std;


const ll INF = 1e18;
const int maxn = 211111;  ///2e5


ll avg[maxn];
ll n,k,A,B;

ll solve(ll l,ll r)
{
    ll ans1=INF,ans2=INF;

    ll lft=lower_bound(avg,avg+k,l)-avg;
    ll rt=upper_bound(avg,avg+k,r)-avg;
    ll no=rt-lft;

    if(no==0)
    {
        ans1=A;
    }
    else ans1=B*no*(r-l+1);

    if(l==r or no==0)
    {
        return ans1;
       /*if(no==0)
        {
            ans2=A;
        }
        else ans2=B*no*1;
        return min(ans1,ans2);*/
    }
    else
    {
        ll mid=(l+r)/2;
        ans2=solve(l,mid)+solve(mid+1,r);
    }


    return min(ans1,ans2);


}

int main()
{

   // flash()
    ll i,j,t,cas=0;
   // cin>>n>>k>>A>>B;
   scanf("%lld %lld %lld %lld",&n,&k,&A,&B);
    for(i=0;i<k;i++) scanf("%lld",&avg[i]);
    sort(avg,avg+k);

    ll ans=solve(1,1ll<<n);
    printf("%lld\n",ans);





}



