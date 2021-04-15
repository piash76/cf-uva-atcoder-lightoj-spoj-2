#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,i,j,k,a,b,c,sum,t;
    cin>>n;
    ll x[n+5][n+5];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>x[i][j];
        }
    }
    cin>>t;
    while(t--)
    {




    //x[a][b]=min(c,x[a][b]);
	//x[b][a]=min(c,x[b][a]);
    sum=0;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                 x[i][j]=min(x[i][j],x[i][a]+x[b][j]+c);
                x[i][j]=min(x[i][j],x[i][b]+x[a][j]+c);

                //sum+=dis[i][j];
            }
        }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            //cout<<x[i][j]<<" ";
            sum+=x[i][j];
        }
        //cout<<endl;
    }

    cout<<sum<<" ";

    }


}
