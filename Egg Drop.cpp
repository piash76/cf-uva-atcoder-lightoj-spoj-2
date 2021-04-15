

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back




using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=200005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    ll n,k;cin>>n>>k;

    vector<ll> v1,v2;

    for(i=0;i<n;i++)
    {
        ll x;string s;cin>>x>>s;



        if(s=="BROKEN") v1.push_back(x);
        else v2.push_back(x);
    }



    sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());






    ll lo,hi;

    if(v1.size()==0)
    {
        lo=v2[v2.size()-1]+1;
        hi=k-1;

    }
    else if(v2.size()==0)
    {
        hi=v1[0]-1;
        lo=2;
    }
    else
    {
        lo=v2[v2.size()-1]+1;
        hi=v1[0]-1;
    }

    cout<<lo<<" "<<hi<<endl;

    return 0;

}


/*

2 10
4 SAFE
7 BROKEN

3 5
2 SAFE
4 SAFE
3 SAFE

4 3
2 BROKEN
2 BROKEN
1 SAFE
3 BROKEN

*/



