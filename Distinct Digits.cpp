#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dig(ll n)
{
    ll z=0,o=0,t=0,th=0,f=0,fiv=0,s=0,sev=0,ei=0,ni=0,r;
    ll te=n;
    while(te!=0)
    {
        r=te%10;
        if(r==0)
        {
            z++;
        }
        else if(r==1)
        {
            o++;
        }
        else if(r==2)
        {
            t++;
        }
        else if(r==3)
        {
            th++;
        }
        else if(r==4)
        {
            f++;
        }
        else if(r==5)
        {
            fiv++;
        }
        else if(r==6)
        {
            s++;
        }
        else if(r==7)
        {
            sev++;
        }
        else if(r==8)
        {
            ei++;
        }
        else if(r==9)
        {
            ni++;
        }
        te=te/10;
    }
    if(z>1 || o>1 || t>1 ||  th>1 || f>1 || fiv>1 || s>1 || sev>1 || ei>1 || ni>1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    ll i,j,k,a,b,f=0,r;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        r=dig(i);
        if(r)
        {
           f=1;
           break;
        }
    }
    if(f)
    {
        cout<<i<<endl;

    }
    else
    {
        cout<<-1<<endl;
    }
}
