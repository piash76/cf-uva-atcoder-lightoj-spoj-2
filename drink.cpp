#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q,i,j,x;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    while(q--)
    {
        cin>>x;
        cout<<upper_bound(a,a+n,x)-a<<endl;
    }
}
