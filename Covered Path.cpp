#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int a[105],b[105];
int main()
{
    godspeed()
    int n,i,j,k,t,d,v1,v2,s=0;
    cin>>v1>>v2;
    cin>>t>>d;
    a[0]=v1;
    b[t-1]=v2;
    for(i=1;i<t;i++)
    {
        a[i]=a[i-1]+d;
        //cout<<a[i]<<endl;
    }
    for(i=t-2;i>=0;i--)
    {
        b[i]=b[i+1]+d;
        //cout<<b[i]<<endl;
    }
    //for(i=0;i<t;i++) cout<<a[i]<<" "<<b[i]<<endl;
    for(i=0;i<t;i++)
    {
        s+=min(a[i],b[i]);
    }
    cout<<s<<endl;
    see_you;
}
