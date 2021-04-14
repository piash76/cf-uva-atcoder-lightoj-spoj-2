
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
    cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;

        ll d=(n-1)/2;

        if(k>d) cout<<-1<<endl;
        else if(n<=2 and k!=0) cout<<-1<<endl;
        else
        {

            vector<ll> v;

            v.push_back(1);
            ll cnt=0;

            ll x=3;

            while(x<=n and cnt<k)
            {

                v.push_back(x);
                v.push_back(x-1);
                x+=2;
                cnt++;
            }

            for(i=x-1;i<=n;i++) v.push_back(i);

            for(auto it:v) cout<<it<<" ";
            cout<<endl;
        }


    }

    return 0;

}


