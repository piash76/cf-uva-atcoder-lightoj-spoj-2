#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    int i,j,t,s,k,c,r,m,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        k=a[n-2];
        k-=1;
        r=n-2;
        cout<<min(k,r)<<endl;
    }
    see_you;
}
