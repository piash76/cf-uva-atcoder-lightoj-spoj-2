


#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define   sc3(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1(a)           printf("%lld\n",(a))
#define    p2(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))
#define    el             cout<<endl
#define c(x)       cout<<x<<endl
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define f1(i,a,b)  for(int i=a;i<b;i++)
#define f2(i,a,b) 	for(int i=a;i<=b;i++)
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define getar(a,n)           for(int i=0;i<n;i++) cin>>a[i]
#define putar(a,n)           for(int i=0;i<n;i++) cout<<a[i]<<endl;
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
#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209
#define N 211111
using namespace std;

//from a loser

vector<ll> g[N],r[N],component[N];///ith component is some node which is strongly connected
ll vis1[N],vis2[N],scc[N],in[N],out[N]; ///scc[node]=kto no strongly connected component
stack<ll> st;
ll compcount;


void clean(ll n)
{
    compcount=0;
    while(!st.empty()) st.pop();

    for(ll i=0;i<=n;i++)
    {
        g[i].clear();
        r[i].clear();
        component[i].clear();
        vis1[i]=0;
        vis2[i]=0;
        scc[i]=0;
        in[i]=0;
        out[i]=0;
    }
}


void dfs(ll s)
{
    vis1[s]=1;

    for(ll i=0;i<g[s].size();i++){
        ll x=g[s][i];
        if(!vis1[x]){

            dfs(x);
        }
    }

    st.push(s);
}
void dfs1(ll s)
{
    vis2[s]=1;
    for(ll i=0;i<r[s].size();i++){
        ll x=r[s][i];
        if(!vis2[x]){

            dfs1(x);
        }
    }

    scc[s] = compcount;
    component[compcount].push_back(s);
}


void kosaraju_scc(ll n)
{

    for(ll i=1;i<=n;i++)
        {
            if(!vis1[i]) dfs(i);
        }

        while(!st.empty())
        {
            ll d=st.top();
            st.pop();
            if(!vis2[d])
            {
                compcount++;
                dfs1(d);
            }
        }


}




int main()
{
     ll t,i,cas=0;
     scanf("%lld",&t);
    while(t--)
    {
        //cin>>n>>m;
        ll n,m;
        scanf("%lld %lld",&n,&m);

        clean(n);
       // if(n==0 and m==0) break;

        for(i=1;i<=m;i++)
        {
            ll a,b;
            scanf("%lld %lld",&a,&b);
            g[a].pb(b);
            r[b].pb(a);
        }

        kosaraju_scc(n);
        printcase;

        ll cnt1=0,cnt2=0;

        for(i=1;i<=n;i++)
        {
            for(auto child:g[i])
            {
                if(scc[i]!=scc[child])  ///they are different component
                {
                    in[scc[child]]++;
                    out[scc[i]]++;
                }
            }
        }

        ll incnt=0,outcnt=0;

        for(i=1;i<=compcount;i++)   ///we have to make a incoming edge and outgoing edge for all sccs
        {
            if(in[i]==0) incnt++;
            if(out[i]==0) outcnt++;
        }

        if(compcount==1) printf("0\n");
        else printf("%lld\n",max(incnt,outcnt));


      //cout<<compcount<<endl;

     // for(i=1;i<=n;i++) cout<<scc[i]<<" ";
      // cout<<endl;




    }

    see_you;

}


/*

4

3 2
1 2
1 3

5 4
1 2
2 3
3 1
4 3




ans=2
ans=2

*/









