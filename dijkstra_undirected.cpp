
///https://atcoder.jp/contests/abc192/tasks/abc192_e

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

ll dis[M];
ll n,m,s,d;

vector<array<ll,3>>g[M];



void dijkstra()
{
    dis[s]=0;
    priority_queue<pll,vector<pll>,greater<pll>> q;
    q.push({0,s});  ///dis,node

    while(!q.empty())
    {


        ll u=q.top().ss;
        ll prev_cst=q.top().ff;
        q.pop();

        //cout<<"U "<<u<<endl;

        if(dis[u]<prev_cst) continue;   ///for multiple roads coming to node u

        for(auto i:g[u])
        {
            ll v=i[0];

            ll new_cst=i[1];

            ll tm=i[2];

          //  cout<<"V "<<v<<" CST1 "<<new_cst<<" Tm "<<tm<<endl;

            ll totcost=new_cst;

            if(prev_cst<=tm and prev_cst!=0) totcost+=tm-prev_cst;
            else if(prev_cst>tm and prev_cst!=0)
            {
                ll d=(prev_cst+tm-1)/tm;
                ll p=d*tm;
                totcost+=(p-prev_cst);


            }

           // cout<<"TOT "<<totcost<<endl;

            if(dis[u]+totcost<dis[v])
            {
                dis[v]=dis[u]+totcost;
                q.push({dis[v],v});
               //cout<<"NEW dis "<<dis[v]<<" V "<<v<<endl;
            }

        }




    }

}



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>n>>m>>s>>d;

    for(i=1;i<=n;i++) dis[i]=inf;

    for(i=1;i<=m;i++)
    {
        ll x,y,t1,k1;cin>>x>>y>>t1>>k1;
        g[x].push_back({y,t1,k1});
        g[y].push_back({x,t1,k1});


    }

    dijkstra();

    if(dis[d]==inf) cout<<-1<<endl;
    else cout<<dis[d]<<endl;




    return 0;

}



