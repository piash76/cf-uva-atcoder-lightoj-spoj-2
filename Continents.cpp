#include<bits/stdc++.h>
using namespace std;

char gp[100][100],vis[100][100];
int n,m,c;
char king;

void dfs(int i,int j)
{
    if(i<0 || i>=n) return;
    if(j<0) j=m-1;
    if(j>=m) j=0;
    if(gp[i][j]!=king || vis[i][j]==1) return;
    vis[i][j]=1;
    c++;
    dfs(i+1,j);
    dfs(i,j+1);
    dfs(i-1,j);
    dfs(i,j-1);

}

int main()
{
    int ans,i,j,k,x,y;
    while(cin>>n>>m)
    {
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>gp[i][j];
            }
        }
        cin>>x>>y;
        king=gp[x][y]; //kings residence
        dfs(x,y);
        ans=0;
        for(i=0;i<n;i++)
        {

            for(j=0;j<m;j++)
            {
                c=0;
               dfs(i,j);
               if(c>ans)
               {
                   ans=c;
               }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

