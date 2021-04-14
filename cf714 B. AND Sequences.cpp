
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
const int mod2=2147483647; ///2^31-1
const int M=500005;
const int N=500005;


ll a[M];

inline void normal(ll &a) { a %= mod; if(a<0) a+=mod; }
inline ll modMul(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a * b) % mod; }
inline ll modAdd(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a + b) % mod; }
ll f[N];
void fact()
{
    f[0] = 1;
    for(ll i = 1; i < N; i++) {
        f[i] = modMul(f[i-1], i);
    }
}

int main()
{

    fact();

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;

        ll mn=1e9+10;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    mn=min(a[i],mn);

    }
       int cnt=0;

        for(i=0;i<n;i++) if(a[i]==mn) cnt++;

    bool flag=true;

    for(int i=0;i<n;i++)
    {

        if(a[i]!=mn and (mn&a[i])!=mn)
        {
            flag=false;break;
        }
    }

    if(flag)
    {


    ll ans=modMul(cnt,cnt-1);


    ans =modMul(ans,f[n-2]);

    cout<<ans<<endl;

    }
    else  cout<<0<<endl;




    }

    return 0;

}



