

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>
#define ld long double

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

double p[M],w[M];


int main()
{
    ll i,j;

    ll n,cap;scanf("%lld %lld",&n,&cap);

    for(i=0;i<n;i++) scanf("%lf %lf",&p[i],&w[i]);

    vector<pair<double,ll> >profit_per_unit;  ///profit_per_unit,idx

    for(i=0;i<n;i++)
    {
        double x=p[i]/w[i];
        profit_per_unit.push_back({x,i});
    }
    sort(profit_per_unit.begin(),profit_per_unit.end(),greater<>());

   // for(auto x:profit_per_unit) cout<<x.ff<<" "<<x.ss<<endl;

   double ans=0.0;
    for(auto x:profit_per_unit)
    {
        ll idx=x.ss;

        double wt=w[idx];
        double pt=p[idx];

        if(wt<=cap)
        {
            ans+=pt;
            cap-=wt;

        }
        else
        {

            ans+=(x.ff*cap);
            cap=0;
        }
    }

    printf("%.4f\n",ans);




    return 0;

}



