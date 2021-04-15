#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    map <int,int>vote;
    char ch='%';
    int n,m,k,a,i,x;
    cin>>n>>m;
    int z=m;
    while(m--)
    {
        cin>>a;
        vote[a]++;

    }
    //int z=m;
    for(i=1;i<=n;i++)
    {
        //int z=m;
        x=vote[i];

        double r=(double)x/z;

        printf("%.2lf%c",r*100.00,ch);
        cout<<endl;
    }



}
