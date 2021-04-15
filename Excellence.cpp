






///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define pll             pair<ll,ll>
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =1000009;///1e6
ll a[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    ll n;cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    ll ans=LLONG_MAX,idx=n-1;

    for(i=0;i<n/2;i++)
    {
        ll x=a[i]+a[idx--];
        ans=min(ans,x);
    }

    cout<<ans<<endl;




    return 0;

}




