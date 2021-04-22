
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

        for(i=0;i<n;i++) cin>> a[i];

        ll lft=0,rt=n-1;


        while(lft<rt and k)
        {
            while(a[lft] and k)
            {
                a[lft]--;
                k--;
                a[rt]++;
            }
            lft++;

        }


        for(i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;



    }

    return 0;

}


