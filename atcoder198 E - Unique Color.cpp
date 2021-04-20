
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

ll a[M],gd[M],vis[M],c[M];
vector<ll> g[M];


void dfs(ll u)
{
    vis[u]=1;

    c[a[u]]++;

    if(c[a[u]]>=2) gd[u]=1;

    for(auto v:g[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }

    c[a[u]]--;
}




int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;

    ll n;cin>>n;

    for(i=1;i<=n;i++) cin>>a[i];

    for(i=1;i<n;i++)
    {
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

   // c[a[1]]++;
    dfs(1);




    for(i=1;i<=n;i++) if(!gd[i]) cout<<i<<"\n";



    return 0;

}




