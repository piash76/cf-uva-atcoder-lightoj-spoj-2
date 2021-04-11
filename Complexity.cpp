






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


const int mx =1000009;///1e6
ll a[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;

    string s;cin>>s;
    ll n=s.size();

    map<char,ll> m;

    for(i=0;i<n;i++) m[s[i]]++;

    vector<ll>v(n+5);
    for(auto x:m) v.push_back(x.ss);
    sort(v.begin(),v.end());

    ll sm=0;
    for(i=0;i<v.size()-2;i++)
    {
        cout<<v[i]<<" ";
        sm+=v[i];
    }
    cout<<endl;

    cout<<sm<<endl;




    return 0;

}




