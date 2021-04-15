

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

ll vis[M];

vector<ll> g[M];




int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;

    ll n;cin>>n;

    map<ll,ll> mp;
    map<pll,ll> val;

    vector<pair<pll,ll> >ans;

    for(i=1;i<=n;i++)
    {
        ll m;cin>>m;
        bool f=false;
        for(j=1;j<=m;j++)
        {
            ll x;cin>>x;
            if(mp[x])
            {
                ll ux=mp[x];
                ll vx=i;

                g[ux].push_back(vx);
                g[vx].push_back(ux);

                val[{ux,vx}]=x;
                val[{vx,ux}]=x;


            }
            else
            {
                mp[x]=i;
            }
        }

    }

    queue<ll> q;
    vis[1]=1;
    q.push(1);

    while(!q.empty())
    {
        ll u=q.front();
        q.pop();

        for(auto v:g[u])
        {
            if(vis[v]==0)
            {
                vis[v]=1;

                ans.push_back({{u,v},val[{u,v}]});
                q.push(v);
            }
        }
    }




    bool f1=true;
    for(i=1;i<=n;i++)
    {
        if(!vis[i]) {f1=false;break;}
    }

    if(f1)
    {
        //cy;
        for(auto x:ans)
        {
            cout<<x.ff.ff<<" "<<x.ff.ss<<" "<<x.ss<<endl;
        }
    }
    else
    {
        cout<<"impossible"<<endl;
    }



    return 0;

}



