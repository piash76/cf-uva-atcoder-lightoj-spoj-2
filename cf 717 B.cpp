

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
        ll n;cin>>n;

        for(i=0;i<n;i++) { cin>>a[i]; }


        ///fooled again by brute force :v

        bool f=false;

        for(i=0;i<n-1;i++)
        {
            ll sm1=0;
            for(j=0;j<=i;j++) sm1^=a[j];

            ll sm2=0;


            bool f2=false;
            for(j=i+1;j<n;j++)
            {
                f2=false;
                sm2^=a[j];

                if(sm2==sm1)
                {
                    sm2=0;
                    f2=true;
                }
            }

            if(sm2==0 and f2) { f=true;break; }
        }


        if(f) cy;
        else
        {
            reverse(a,a+n);
            bool ff=false;

        for(i=0;i<n-1;i++)
        {
            ll sm11=0;
            for(j=0;j<=i;j++) sm11^=a[j];

            ll sm22=0;


            bool f22=false;
            for(j=i+1;j<n;j++)
            {
                f22=false;
                sm22^=a[j];

                if(sm22==sm11)
                {
                    sm22=0;
                    f22=true;
                }
            }

            if(sm22==0 and f22) { ff=true;break; }
        }

        if(ff) cy;
        else cn;



        }




    }

    return 0;

}



