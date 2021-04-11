


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
const int M=1000005;

ll a[M],tree[4*M],L[M],R[M];

void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=0;
        return;
    }

    ll mid=(b+e)/2;
    ll lft=2*node;
    ll rt=(2*node)+1;

    build(lft,b,mid);
    build(rt,mid+1,e);

    tree[node]=tree[lft]+tree[rt];
}



void update(ll node,ll b,ll e,ll i,ll val)
{
    if(i>e or i<b) return;

    if(i==e and i==b)
    {
        tree[node]+=val;
        return;
    }

    ll lft=2*node;
    ll rt=(2*node)+1;
    ll mid=(b+e)/2;

    update(lft,b,mid,i,val);
    update(rt,mid+1,e,i,val);

    tree[node]=tree[lft]+tree[rt];


}


ll query(ll node,ll b,ll e,ll i,ll j)
{
    //cout<<"NODe "<<node<<" B "<<b<<" E "<<e<<endl;

     if(i>e || j<b) return 0; ///out of range

    if (b >= i && e <= j) return tree[node]; ///correct range  ///i --b--e--j
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    ll x=query(left,b,mid,i,j);
    ll y=query(right,mid+1,e,i,j);

    return x+y;
}



int main()
{



    ll t,i,j;

    ll n;scanf("%lld",&n);


    vector<pll> v;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        v.push_back({a[i],i}); ///val,idx
    }
    sort(v.begin(),v.end());

    ll id=1;
    for(auto x:v)
    {
        a[x.ss]=id++;
    }

    build(1,1,n);

    for(i=1;i<=n;i++)
    {
        L[i]=query(1,1,n,a[i]+1,n);
        update(1,1,n,a[i],1);

    }

   // for(i=1;i<=n;i++) cout<<L[i]<<" ";
   // cout<<endl;

  ll ans=0;

  for(i=1;i<=n;i++) ans+=(L[i]);

  printf("%lld\n",ans);





    return 0;

}



