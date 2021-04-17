
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



    ll ts,i,j;
    cin>>ts;
    while(ts--)
    {
        ll n;cin>>n;
        string s;cin>>s;

        bool f=true;

        ll t=0,m=0;
        for(i=0;i<n;i++)
        {


            if(s[i]=='T') t++;
            else if(s[i]=='M')
            {
               m++;
               if(m>t) {f=false;break;}
            }

        }

       // cout<<"T "<<t<<" M "<<m<<endl;

        if(t!=2*m) f=false;

        reverse(s.begin(),s.end());

        t=m=0;

        for(i=0;i<n;i++)
        {
            if(s[i]=='T') t++;
            else if(s[i]=='M')
            {
                 m++;
               if(m>t) {f=false;break;}
            }

        }


         if(t!=2*m) f=false;


         if(f) cy;
         else cn;






    }

    return 0;

}




