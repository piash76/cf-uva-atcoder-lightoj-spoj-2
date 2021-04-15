#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    ll i,j,n,m,k,l,t,x,y,r,z;
    cin>>t;
    while(t--)
    {

        cin>>x;
        n=x/14;
        r=x%14;
        cout<<n<<" "<<r<<endl;
        if(n>=1 && r>=1 && r<=6) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    see_you;
}
