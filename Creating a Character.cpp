#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j,e,a,b,x,y,t,c;

    cin>>t;

    for(j=1;j<=t;j++)
    {

        c=0;
        cin>>x>>y>>e;
        a=x+e;
        if(a<=y)
        {
            cout<<"0"<<endl;
        }
        else if(y+e<x)
        {
            cout<<e+1<<endl;
        }
        else
        {
            cout<<(a-y+1)/2<<endl;
        }



    }
}
