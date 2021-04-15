
///https://atcoder.jp/contests/abc191/tasks/abc191_e


///minimum wight to get back to the starting node


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
const int M=2005;

ll n,m;

vector<pll> g[M];
ll dis[M],ans[M];

void dijkstra(ll src)
{
    priority_queue< pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll> > > q;

    q.push({0,src}); ///distance from src, node


    while(!q.empty())
    {
        ll node=q.top().ss;
        q.pop();

       // cout<<"NODE "<<node<<endl;

        for(ll i=0;i<g[node].size();i++)
        {
            ll child=g[node][i].ff;
            ll cst=g[node][i].ss;

            //cout<<"CHILD "<<child<<" CST "<<cst<<endl;

            if(child==src)  ///for back walk
            {
                if(dis[child]==LLONG_MAX)
                {
                   // cout<<"HERE1 "<<endl;

                    if(node==src) dis[child]=cst;
                    else dis[child]=cst+dis[node];
                }
                else
                {
                    //cout<<"HERE2 "<<endl;

                    if(node==src) dis[child]=min(dis[child],cst);
                    else dis[child]=min(dis[child],cst+dis[node]);
                }

            }
            else if(node==src)  ///for initial
            {
                if(0+cst<dis[child])
                {
                   // cout<<"HERE3 "<<endl;

                    dis[child]=0+cst;

                    q.push({dis[child],child});
                }
            }
            else
            {
                if(dis[node]+cst<dis[child])
                {
                   // cout<<"HERE4 "<<endl;

                    dis[child]=dis[node]+cst;

                    q.push({dis[child],child});
                }
            }



        }

    }
}

int main()
{



    ll t,i,j;
    scanf("%lld %lld",&n,&m);
    while(m--)
    {
        ll u,v,c;scanf("%lld %lld %lld",&u,&v,&c);
        g[u].push_back({v,c});

    }

    for(i=1;i<=n;i++)
    {
        ll source=i;

        //cout<<"SOURCE "<<source<<endl;

        for(j=1;j<=n;j++) dis[j]=LLONG_MAX;

        dijkstra(source);

        //cout<<"ans "<<dis[source]<<endl;


        ans[source]=dis[source];
        //cout<<dis[1]<<endl;

    }

    for(i=1;i<=n;i++)
    {
        if(ans[i]==LLONG_MAX) cout<<-1<<"\n";
        else cout<<ans[i]<<"\n";

    }





    return 0;

}



