#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,x;
    double s;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>x;
            s+=x;
        }
        int ans=ceil(s/n);
        cout<<ans<<endl;
    }
}
