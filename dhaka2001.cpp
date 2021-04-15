#include<bits/stdc++.h>
using namespace std;

int per(long long n)
{
    long long i,r,s=0;
    for(i=1;i<n;i++)
    {
        r=n%i;
        if(r==0)
        {
            s+=i;
        }
    }
    if(s==n)
    {
        return 1;

    }
    else
    {
        return 0;
    }
}

int main()
{
    string a;
    int n,i,d,m,r;
    cin>>n;
    cin>>a;
    for(i=0;i<a.size();i=i+2)
    {
        m=a[i]-'0';
        d=pow(2,m-1)*(pow(2,m)-1);

        r=per(d);
        if(r)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
