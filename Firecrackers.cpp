





///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define pll             pair<ll,ll>
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =2000009;///1e6
ll a[mx];
ll n,m,ax,bx;

bool chek(ll no)
{


    bool f=true;
    ll idx=1,cnt=0;
    ll dif=abs(ax-bx)-1;///highest bomb

    if(no>dif or no>m) return false;

    ll r;

    if(ax<bx) r=bx-1;
    else r=n-bx;

    for(ll i=no;i>=1;i--)
    {
        if(idx+a[i]>r) {f=false;break;}
        idx++;
    }


    return f;
}


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>ax>>bx;

        for(i=1;i<=m;i++) cin>>a[i];
        ///sort(a,a+m,greater<ll>());
         sort(a+1,a+m+1);

        ll l=0,h=1e15,ans;

        while(l<=h)
        {
            ll mid=(l+h)/2;

            //cout<<"MID "<<mid<<endl;

            if(chek(mid))
            {
                //cout<<"YES MID "<<mid<<endl;

                ans=mid;l=mid+1;
            }
            else h=mid-1;

        }

        cout<<ans<<endl;
    }



    return 0;

}





