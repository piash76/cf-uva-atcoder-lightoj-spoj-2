
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
const int M=200005;

pll coin[M],dia[M];

pll cp[M],diap[M];

ll mxc[M],mxd[M];


bool comp(pll &x,pll &y) ///sort,
{
    if(x.ff!=y.ff) return x>y;
    else if(x.ff==y.ff)
    {
     return x<y;
    }
}



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    ll n,c,d;cin>>n>>c>>d;


    ll idx1=0,idx2=0,idx3=0,idx4=0;

    for(i=0;i<n;i++)
    {
        ll bt,cost;cin>>bt>>cost;
        char ch;cin>>ch;

        if(ch=='C')
        {
            cp[idx1++]={bt,cost};  ///beauty,cost
            coin[idx3++]={cost,bt};

        }
        else
        {
            diap[idx2++]={bt,cost};

           dia[idx4++]={cost,bt};

        }
    }

    sort(cp,cp+idx1,comp);
    sort(diap,diap+idx2,comp);


    /*

    for(i=0;i<idx1;i++) cout<<cp[i].ff<<" "<<cp[i].ss<<endl;

    cout<<endl;

    for(i=0;i<idx2;i++) cout<<diap[i].ff<<" "<<diap[i].ss<<endl;

    */


    ///coin+diamond

    ll id1=-1,id2=-1,ans1=-1,ans2=-1,ans3=-1;

    ll idx=0;
    while(idx<idx1)
    {
        if(cp[idx].ss<=c) {id1=idx;break; }
        idx++;
    }

    idx=0;
    while(idx<idx2)
    {
        if(diap[idx].ss<=d) {id2=idx;break; }
        idx++;
    }

    if(id1!=-1 and id2!=-1)
    {
        ans1=cp[id1].ff+diap[id2].ff;
    }

    ///2 coins+0 diamond

    sort(coin,coin+idx3);

    for(i=0;i<idx3;i++) ///cost,beauty
    {
        //cout<<coin[i].ff<<" "<<coin[i].ss<<endl;
        if(i==0) mxc[i]=coin[i].ss;
        else
        {
            ll rem=c-coin[i].ff;
            if(rem>0 and rem>=coin[0].ff)
            {
                ll l=0,h=i-1,id=-1;
                while(l<=h)
                {
                    ll mid=(l+h)/2;

                    if(coin[mid].ff<=rem) {id=mid;l=mid+1;}
                    else h=mid-1;
                }

                if(id!=-1) ans2=max(ans2,mxc[id]+coin[i].ss);
            }
        }

        mxc[i]=max(mxc[i-1],coin[i].ss);
    }

   // cout<<ans2<<endl;


    ///0 coins+2 diamond

    sort(dia,dia+idx4);

    for(i=0;i<idx4;i++) ///cost,beauty
    {
        //cout<<dia[i].ff<<" "<<dia[i].ss<<endl;

        if(i==0) mxd[i]=dia[i].ss;
        else
        {
            ll rem=d-dia[i].ff;
             //cout<<"REM "<<rem<<endl;
            if(rem>0 and rem>=dia[0].ff)
            {
                ll l=0,h=i-1,id=-1;
                while(l<=h)
                {
                    ll mid=(l+h)/2;

                    if(dia[mid].ff<=rem) {id=mid;l=mid+1;}
                    else h=mid-1;
                }
                //cout<<"REM "<<rem<<" ID "<<id<<endl;

                if(id!=-1) ans3=max(ans3,mxd[id]+dia[i].ss);
            }
           // cout<<"ANS3 "<<ans3<<endl;
        }

        mxd[i]=max(mxd[i-1],dia[i].ss);
    }

    ///cout<<ans3<<endl;
    ll ans=max(ans1,max(ans2,ans3));

    if(ans==-1) cout<<0<<endl;
    else cout<<ans<<endl;












    return 0;

}

/*
6 68 40
1 18 D
6 16 D
11 16 D
7 23 D
16 30 D
2 20 D



*/



