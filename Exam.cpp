#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    int n,i,j,k,a=1,b=2;
    cin>>n;
    if(n==1 || n==2)
    {
        cout<<1<<endl;
        cout<<1<<endl;
        see_you;
    }
    if(n==3)
    {
        cout<<2<<endl;
        cout<<1<<" "<<3<<endl;
        see_you;

    }
    if(n==4)
    {
        cout<<4<<endl;
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
        see_you;
    }
    else
    {
        cout<<n<<endl;
        for(i=a;i<=n;i+=2) cout<<i<<" ";
        for(i=b;i<=n;i+=2) cout<<i<<" ";
        see_you;
    }

}
