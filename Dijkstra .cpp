#include<bits/stdc++.h>
#define ll long long
#define inf 1e18
using namespace std;
vector<ll> g[100005];
map< pair<ll,ll> , ll >cost;
ll dis[100005],path[100005];

void printpath(ll i)
{
    if(i!=1)
    {
       printpath(path[i]);
    }

    cout<<i<<" ";
}


void Dijkstra()
{
    priority_queue<ll> q; ///sorted ascending according to distance from the source
    q.push(1);
    dis[1]=0;
    while(!q.empty())
    {
        ll u=q.top();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            ll v=g[u][i];
            ll cst=cost[{u,v}];
            if(dis[u]+cst<dis[v])
            {
                dis[v]=dis[u]+cst;
                path[v]=u;
                q.push(v);
            }
        }
    }

}

int main()
{
    ll n,m,i,j,x,y,c;
    cin>>n>>m;
    for (i=2 ;i<=n ;i++)
    {
        dis[i]=inf;
    }
   while(m--)
   {
       cin>>x>>y>>c;
       g[x].push_back(y);
       g[y].push_back(x);
       cost[{x,y}]=c;
       cost[{y,x}]=c;
   }
   Dijkstra();
  /* if(dis[n]==inf)
   {
       cout<<"-1"<<endl;
   }
   else
   {
       printpath(n);
   }*/
   return 0;
}
