#include<iostream>
using namespace std;

int rev(int a)
{
    int te,i,s=0,r;
    te=a;
    while(te!=0)
    {
        r=te%10;
        s=(s*10)+r;
        te=te/10;
    }
    return s;
}

int main()
{
    int n,t,r,s,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        s=rev(a)+rev(b);
        r=rev(s);
        cout<<r<<endl;

    }
}
