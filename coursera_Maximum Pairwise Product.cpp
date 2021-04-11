

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long



using namespace std;
const ll inf=1e18;
const int mod=1e9+7;
const int M=500005;

ll a[M];


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;cin>>n;
    for(ll i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);

    cout<<a[n-1]*a[n-2]<<endl;




    return 0;

}



