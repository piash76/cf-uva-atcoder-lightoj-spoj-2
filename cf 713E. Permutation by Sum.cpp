
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

ll a[M],vis[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,l,r,s;cin>>n>>l>>r>>s;

        for(i=0;i<=n;i++) vis[i]=0;

        ll id=1,sm=0;

        for(i=l;i<=r;i++) { a[i]=id++;sm+=a[i]; }

        if(s<sm) cout<<-1<<endl;
        else
        {
            bool f=false;
            ll mx=n+1;
            for(i=r;i>=l;i--)
            {
                mx--;
                if(sm==s)
                {
                    f=true;
                    break;
                }

                for(ll val=a[i]+1;val<=mx;val++)
                {
                    a[i]=val;
                    sm++;
                    if(sm==s)
                    {
                       f=true;
                       break;
                    }
                }


            }


            if(f)
            {
                for(i=l;i<=r;i++) vis[a[i]]=1;

                stack<ll> st;
                for(i=1;i<=n;i++) if(vis[i]==0) st.push(i);

                for(i=1;i<l;i++) {a[i]=st.top();st.pop(); }

                for(i=r+1;i<=n;i++) {a[i]=st.top();st.pop(); }

                for(i=1;i<=n;i++) cout<<a[i]<<" ";
                cout<<endl;


            }
            else cout<<-1<<endl;
        }


    }

    return 0;

}




