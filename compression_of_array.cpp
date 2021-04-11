
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

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

     ll n;scanf("%lld",&n);


     ///compresion is the process in which we compress the array values where array values
     /// becomes in range from (1 to n)  n is array size

    vector<pll> v;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        v.push_back({a[i],i}); ///val,idx
    }
    sort(v.begin(),v.end());

    ll id=1;
    for(auto x:v)
    {
        a[x.ss]=id++;
    }



    return 0;

}




