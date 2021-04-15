#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n,x,y,i;
    cin>>x>>y>>n;
    for(i=1;i<=n;i++)
    {
        if(i%x==0 && i%y==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%x==0)
        {
            cout<<"Fizz"<<endl;
        }
        else if(i%y==0)
        {
            cout<<"Buzz"<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
}
