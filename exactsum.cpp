#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,i,m,maxa,p,q,x,y,j,d;
    while(cin>>n)
    {
        maxa=1000000;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        cin>>m;

        for(i=0;i<n;i++)
        {
           for(j=i;j<n;j++)
           {
               x=a[i];
               y=a[j];
               d=abs(x-y);
               if(x+y==m && d<maxa)
               {
                   p=i;
                   q=j;
                   maxa=d;
               }

           }

        }

          cout<<"Peter should buy books whose prices are "<<a[p]<<" and "<<a[q]<<"."<<endl;
          cout<<endl;

    }
}
