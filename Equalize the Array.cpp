

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
    cin>>t;
    while(t--){

        ll n;cin>>n;
        map<ll,ll> cnt;

        for(i=0;i<n;i++){

            cin>>a[i];
            cnt[a[i]]++;
        }

        map< ll,ll,greater<ll> > m1;

        for(auto x:cnt) m1[x.ss]++;

        map<ll,ll> m2;
        ll s=0;
        for(auto x:m1){

            m2[x.ff]=s+x.ss;
           // cout<<x.ff<<" "<<x.ss+s<<endl;


            s+=x.ss;


        }

        ll ans=n;

        for(auto x:m2){


           ll y=x.ff*x.ss;

            ans=min(ans,n-y);

            //cout<<"S "<<ans<<endl;

           // cout<<x.ff<<" "<<x.ss<<endl;
        }

        cout<<ans<<endl;

        //cout<<"S "<<ans<<endl;










    }

    return 0;

}



