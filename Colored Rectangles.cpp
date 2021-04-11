
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

ll nr,ng,nb;
ll r[300],g[300],b[300];
ll dp[300][300][300];

ll solve(ll i,ll j,ll k)
{

    if( (i>=nr and j>=ng ) || (i>=nr and k>=nb ) || (j>=ng and k>=nb) ) return 0;

    if(dp[i][j][k]!=-1) return dp[i][j][k];

    ll ans=0;
    if(i<nr and j<ng) ans=max(ans,r[i]*g[j]+solve(i+1,j+1,k));
    if(i<nr and k<nb) ans=max(ans,r[i]*b[k]+solve(i+1,j,k+1));
    if(j<ng and k<nb) ans=max(ans,g[j]*b[k]+solve(i,j+1,k+1));

    return dp[i][j][k]=ans;

}

int main()
{
    flash()
    ll i,j,t,cas=0,k;
    memset(dp,-1,sizeof(dp));

    cin>>nr>>ng>>nb;

    for(i=0;i<nr;i++) cin>>r[i];
    for(i=0;i<ng;i++) cin>>g[i];
    for(i=0;i<nb;i++) cin>>b[i];

    sort(r,r+nr);reverse(r,r+nr);
    sort(g,g+ng);reverse(g,g+ng);
    sort(b,b+nb);reverse(b,b+nb);

    ll ans=solve(0,0,0);
    cout<<ans<<endl;





}



