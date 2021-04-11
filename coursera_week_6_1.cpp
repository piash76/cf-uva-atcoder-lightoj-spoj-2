
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



ll fun(ll wt,vector<ll> &wr)
{
    ll i,j;

    vector< vector<ll> > dp(wr.size()+2, vector<ll> (wt+2, 0));

    for(i = 1; i <= wr.size(); i++)
    {
        for(j = 1; j <=wt; j++)
        {
            if(wr[i-1] > j){dp[i][j] = dp[i-1][j];}
            else{dp[i][j] = max(wr[i-1] + dp[i-1][j-wr[i-1]], dp[i-1][j]);}
        }
    }
    return dp[wr.size()][wt];
}



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll i,j;

    ll n, wt;
    cin >>wt>> n;

    vector<ll>ar(n);
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout <<fun(wt,ar)<<endl;


    return 0;

}




