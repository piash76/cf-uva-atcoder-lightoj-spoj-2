

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
    ll n;cin>>n;

   // ll x=brute(n);



    ll s=0;
    for(ll r=1;r*r<=n;r++)
    {
        ll c=n-r;
        ll d=r;
        //cout<<"REM "<<c%d<<endl;
        ll x=(n-r)/r;

        if(c%d==0 and x>r)
        {
           // cout<<"X "<<x<<endl;
            s+=x;
        }
    }

    cout<<s<<"\n";



    return 0;

}



