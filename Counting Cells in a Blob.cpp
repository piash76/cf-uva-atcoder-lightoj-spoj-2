#include<bits/stdc++.h>
using namespace std;

char gp[30][30];
int n,c,row,col;

void dfs(int x,int y)
{
    if(x<0 || x>=row || y<0 || y>=col) return;
    else if(gp[x][y]=='0') return;
    else if(gp[x][y]=='1')
    {
        gp[x][y]='0';
        c++;
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x+1,y+1);
    dfs(x+1,y-1);
    dfs(x-1,y+1);
    dfs(x-1,y-1);

    }
}

int main()
{
    string s;
    int ans,i,j,k,l,t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
    row = 0;

    while (getline(cin,s))
    {
      if (s == "")
        break;

      col = s.size();

      for (int i = 0; i < col; i++)
      {
        gp[row][i] = s[i];
      }

      row++;
    }


        ans=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {

                if(gp[i][j]=='1')
                {
                    c=0;
                    dfs(i,j);
                    ans=max(c,ans);
                    //cout<<c<<endl;
                }
            }
        }

        cout<<ans<<endl;
        if(t)
        {
            cout<<endl;
        }
    }
   return 0;
}
