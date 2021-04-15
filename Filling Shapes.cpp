#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()

{
    ll n,i,j;
    cin>>n;
    if(n%2!=0) cout<<0<<endl;
    else
    {
        j=pow(2,n/2);
        cout<<j<<endl;
    }
}
