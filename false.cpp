#include<bits/stdc++.h>

#define ll long long
using namespace std;

vector<int>v;
int x[1010];
int num(int n)
{
    int s=1,c;
    for(int i=2; i<=n; i++)
    {
        c=0;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
        if(c)
        {
            s=s*(c+1);
        }
    }
    return s;
}
int main()
{

    int t,n,i,j;
    scanf("%d",&t);
    for( i=1; i<=1000; i++)
    {
        x[i] = num(i);
    }
    for( i=1; i<=35; i++)
    {
        for( j=1000; j>=1; j--)
        {
            if(x[j]==i)
            {
                 v.push_back(j);
            }

        }
    }
    for(i=1;i<=t; i++)
    {
        scanf("%d",&n);
        printf("Case %d: ",i);
        cout<<v[n-1]<<endl;
    }

    return 0;
}
