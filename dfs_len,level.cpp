///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define   sc3(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1(a)           printf("%lld\n",(a))
#define    p2(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))
#define    nl             cout<<"\n"
#define c(x)       cout<<x<<endl
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define f1(i,a,b)  for(ll i=a;i<b;i++)
#define f2(i,a,b) 	for(ll i=a;i<=b;i++)
#define fr(i,a,b)   for(ll i=a;i>=b;i--)
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define getar(a,n)           for(int i=0;i<n;i++) cin>>a[i]
#define getar1(a,n)           for(int i=1;i<=n;i++) cin>>a[i]
#define putar(a,n)           for(int i=0;i<n;i++) cout<<a[i]<<" "
#define putar1(a,n)           for(int i=1;i<=n;i++) cout<<a[i]<<" "
#define all(a)                  a.begin(),a.end()
#define lla(A)                  A.rbegin(), A.rend()
#define unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end())
#define pb                      push_back
#define mk                      make_pair
#define ff                      first
#define ss                      second
#define greatersrt(v)  sort(v.begin(),v.end(),greater<ll>())
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define mem(a,x)                memset(a,x,sizeof(a))
#define see_you                     return 0
#define sorta(a,n)                   sort(a,a+n)
#define SORT(v)                 sort(v.begin(),v.end())
#define REV(v)                  reverse(v.begin(),v.end())
int caseno=0;

#define  printcase             printf("Case %d: ",++caseno)
#define Debug                   cout<<endl<<"AND I AM IRONMAN"<<endl;
#define binleastsigonebit(x)    __builtin_ffs(x)
#define binleadingzeroes(x)     __builtin_clz(x)
#define bintrailingzeroes(x)    __builtin_ctz(x)
#define bintotalones(x)         __builtin_popcount(x)

//Datatypes
#define ll                      long long
#define ULL                     unsigned long long
#define LD                      long double
#define UI                      unsigned int
#define US                      unsigned short

//Constants
const int MOD = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
const int maxn = 200000;
const int N = 1111111;
#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209


ll powmod(ll base, ll power)
{
    if (power == 0) {
        return 1;
    } else {
        ll cur = powmod(base, power / 2); cur = cur * cur; cur = cur % MOD;
        if (power % 2 == 1) cur = cur * base;
        cur = cur % MOD;
        return cur;
    }
}


using namespace std;

//from a loser

map<ll,vector<ll>> gp; ///if vertice no is too large
map<ll,ll> vis;

vector<ll> gp[maxn];
ll vis[maxn];
ll level[maxn];
ll len[maxn];
ll par[maxn];
ll cnt=0;
void dfs(ll s)
{
    vis[s]=1;
    len[s]=1;

    for(auto x:gp[s])
    {
       if(!vis[x])
       {
           par[x]=s; /// ///calculating parent
           cnt++;
           level[x]=level[s]+1;///calculating level
           dfs(x);
           len[s]+=len[x];///calculating length
       }
    }
}
void dfs(ll u,ll from,ll cnt)
{
    vis[u]=1;
    par[u]=from;
    level[u]=cnt;

    for(auto v:g[u])
    {
        if(!vis[v])
        {
            dfs(v,u,cnt+1);
        }
    }
}
void dfs(int u, int cnt, int from)
{
    par[u]=from;
    level[u]=cnt;

    for(int i=0;i<SZ(g[u]);i++)
    {
        int v=g[u][i];
        if(v!=from)
        {
            dfs(v,cnt+1,u);
        }
    }
}

void dfs(ll u,ll from,ll cnt)
{
    vis[u]=1;
    par[u]=from;
    level[u]=cnt;

    for(ll i=0;i<g[u].size();i++)
    {
        ll v=g[u][i].first;
        ll cost=g[u][i].second;
        if(vis[v]) continue;
        dist[v]=dist[u]+cost;
        dfs(v,u,cnt+1);
    }
}


void dfs(ll u)
{
    vis[u]=1;
    cntv++;  ///couting no of vertices
    cnte+=g[u].size();  ///couting no of 2*edges
    for(auto v:g[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}



ll df2(ll id)  ///cycle finding for directed graph
{
    A[id]= 1;
    vis[id]= 1;
    for ( auto i:adj[id]){
        if(A[i] == 1)
            return 1;
        if(vis[i] == 0)
            if(df2(i))
                return 1;
    }
    A[id]= 0;
    return 0;
}
for(i=1; i<=n; i++){
        if(vis[i]==0)
            if(df2(i)){
                cout<<-1;
                return 0;
            }
    }



void clean()
{
    for(ll i=0;i<=30010;i++)
    {
        vis1[i]=0;vis2[i]=0;
        g[i].clear();
        dist1[i]=0;dist2[i]=0;
    }
}


void dfs(ll node)
{
    vis[node]=1;

    for(auto child: g[node])
    {
        if(child==par[node]) continue;

        if(!vis[child])
        {
         par[child]=node;
         dfs(child);
        }

    }
}


void dfs(ll node,ll par=-1)
{
    vis[node]=1;

    for(auto child: g[node])
    {
        if(!vis[child])
        {
            dfs(child,node);
        }
    }
}


int main()
{
    flash()
    ll i,j,t,cas=0;
    ll n,k;
    cin>>n;
    //sc2(n,k);
    f2(i,1,n-1)
    {
        ll x,y;
        sc2(x,y);
        gp[x].pb(y);gp[y].pb(x);
    }
    level[1]=1;
    par[1]=0;
    dfs(1);
    for(i=1;i<=n;i++) cout<<par[i]<<" ";


    ll no_of_nodes_on_level[1005]={0};
       ll max_level=-INF;
       f2(i,1,n)
       {
           max_level=max(level[i],max_level);
           no_of_nodes_on_level[level[i]]++;
       }

    /*vector<ll> s;

    f2(i,1,n)
    {
        s.pb(level[i]-len[i]);
    }
    sort(s.rbegin(),s.rend());
    ll ans=0;
    f1(i,0,k) ans+=s[i];

    c(ans);*/



    see_you;
}



