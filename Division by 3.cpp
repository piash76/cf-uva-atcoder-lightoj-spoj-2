#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll cnt(int n)
{
    int i,j;
    i=(n/3)*2;
    if(n%3==2)
    {
        i++;
    }
    return i;
}


int main()
{
    ll i,j,n,t,a,b,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        cin>>a>>b;
        j=cnt(b)-cnt(a);
        if(a%3==0 || a%3==2)
        {
            j++;
        }
        printf("Case %lld: %lld\n",i,j);
    }
}
