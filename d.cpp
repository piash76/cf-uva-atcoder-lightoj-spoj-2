#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,p,q,n;
    cin>>n;

    cout<<"*"<<endl;
    for(i=1;i<=n-1;i++)
    {
        cout<<" ";
    }
 for(i=1;i<=n/2+1;i++)
    {
        for(j=n/2+1;j>=1;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=n/2+1;k++)
        {
            cout<<"* ";
            cout<<endl;
        }
    }
}
