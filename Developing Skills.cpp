#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    int n,k,i,j,m,l,r,x,y,s;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    m=a[n-1];
    for(i=0;i<n-1;i++)
    {
        if(k>0)
        {

        r=m-a[i];
        if(r<k)
        {
        a[i]+=r;
        k-=r;
        }
        if(r>k)
        {
            a[n-1]+=k;
            k=0;
        }
        }
    }
    //cout<<k<<endl;
    if(k>0)
    {
        while(k!=0)
        {

        for(i=0;i<n;i++)
        {
            if(k>0)
            {

            a[i]=a[i]+1;
            k--;
            }
        }
        }
    }
    /*for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }*/
    s=0;
    for(i=0;i<n;i++)
    {
        s+=floor(a[i]/10);
    }
    cout<<min(10*n,s)<<endl;
    see_you;

}
