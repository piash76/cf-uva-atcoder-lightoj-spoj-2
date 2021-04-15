

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
const int M=500005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    ll k;cin>>k;
    string s1,s2;cin>>s1;
    cin>>s2;

    ll n=s1.size();

    ll cnt=0;
    for(i=0;i<n;i++)
    {
        if(s1[i]==s2[i]) cnt++;
    }

    ll x;
    if(cnt>k) x=cnt-k;
    else x=k-cnt;

    cout<<n-x<<endl;

    return 0;

}

/*

3
FTFFF
TFTTT

6
TTFTFFTFTF
TTTTFFTTTT

*/

