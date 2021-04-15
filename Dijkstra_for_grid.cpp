


ll X[4] = {-1,0,0,1};
ll Y[4] = {0,-1,1,0};
ll dis[2001][2001],cost[2001][2001];///from any cell to i,j cell cost is cost[i][j]
ll n,m;

const ll inf = 1e18;


void djk(ll i,ll j)
{
    priority_queue< pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>> >q;
    q.push({0,{i,j}});
    dis[i][j]=0;

    while(!q.empty())
    {
        ll ux=q.top().second.first;
        ll uy=q.top().second.second;
        q.pop();

        for(ll i=0;i<4;i++)
        {
            ll vx=ux+X[i];
            ll vy=uy+Y[i];

            if(vx>=0 and vx<n and vy>=0 and vy<m)
            {
                if(dis[ux][uy]+cost[vx][vy]<dis[vx][vy])
                {
                    dis[vx][vy]=dis[ux][uy]+cost[vx][vy];
                    q.push({dis[vx][vy],{vx,vy}});
                }
            }
        }
    }

}
