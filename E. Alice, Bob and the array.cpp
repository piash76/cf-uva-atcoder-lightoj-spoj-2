

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


    ll t,i,j,cas=0;

    scanf("%lld",&t);

    while(t--)
    {
        ll n;scanf("%lld",&n);

        ll ans=0,cst=0;

        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>=0) ans+=a[i];
        }


        ll first_pstv=-1,last_pstv=-1;

        for(i=0;i<n;i++)
        {
            if(a[i]>=0) {first_pstv=i;break;}
        }

        for(i=n-1;i>=0;i--)
        {
             if(a[i]>=0)   { last_pstv=i;break; }
        }



        if(first_pstv==-1)  ///all ngtve
        {
            ll mx=LLONG_MIN;
            for(i=0;i<n;i++) mx=max(mx,a[i]);
            ans=mx;
            cst=0;


        }
        else
        {

            ll idx=first_pstv,mve=0;

            while(idx<=last_pstv)
            {
                if(a[idx]<0)
                {
                    while(a[idx]<0 and idx<=last_pstv)
                    {
                        idx++;
                    }
                    mve++;
                }
                else idx++;
            }

            cst=mve;

        }




        printf("Case %lld: %lld %lld\n",++cas,ans,cst);



    }



    return 0;

}
/*


5
5
1 2 -2 -2 3
10
-1 2 5 3 -66 1 5 5 5 5
9
-5 2 -3 1 2 3 -5 3 -2

*/



