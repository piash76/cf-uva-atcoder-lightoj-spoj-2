#include<bits/stdc++.h>
#define ll long long
#define bye return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int main()
{
    godspeed()
    int n,i,j,k,l,m,t,q,x,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        int a[4*n+5];
        for(i=1;i<=4*n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+4*n);
        int ar=a[1]*a[4*n];
        for(i=1;i<4*n;i+=2)
        {
            if(a[i]!=a[i+1] || a[i]*a[4*n-i]!=ar)
            {
                c++;
            }
        }
        if(c) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    bye;

}
