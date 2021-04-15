






#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const int maxn =105;
#define ll long long


using namespace std;


ll a[205][205],vis[205][205];

const ll fx[]={+1,-1,+0,+0};
const ll fy[]={+0,+0,+1,-1};
ll n,m;

bool chek(ll i,ll j,ll val)
{
    for(ll k=0;k<4;k++)
    {
        ll vx=i+fx[k];
        ll vy=j+fy[k];
        if(vx>=0 and vx<n and vy>=0 and vy<m)
        {
            if(a[vx][vy]==val) return false;
        }
    }
    return true;
}

int main()
{
    speed()

    ll t,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                vis[i][j]=0;
            }
        }



        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if( (i+j)%2==0 and a[i][j]%2!=0) a[i][j]++;
                if( (i+j)%2!=0 and a[i][j]%2==0) a[i][j]++;
            }

        }




        cout<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }




    }

}

/*

1
3 2
3 3
1 3
2 2

*/

