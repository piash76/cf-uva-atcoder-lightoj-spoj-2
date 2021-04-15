
#include<bits/stdc++.h>
using namespace std;

vector<int>vt;
int divs[1009];
int NOD(int n)
{
    int cnt = 1;
    for(int i=2; i<=n; i++)
    {
        int c=0;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
        if(c)
        {
            cnt=cnt*(c+1);
        }
    }
    return cnt;
}
int main()
{
    int test,num;
    scanf("%d",&test);
    for(int i=1; i<=1001; i++)
    {
        divs[i] = NOD(i);
    }
    for(int i=1; i<=35; i++)
    {
        for(int j=1000; j>=1; j--)
        {
            if(divs[j]==i)
                vt.push_back(j);
        }
    }
    for(int i=1; i<=test; i++)
    {
        scanf("%d",&num);
        printf("Case %d: ",i);
        cout<<vt[num-1]<<endl;
    }


}
