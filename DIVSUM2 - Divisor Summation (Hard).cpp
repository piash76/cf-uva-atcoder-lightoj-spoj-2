#include<bits/stdc++.h>

using namespace std;
const long long n = 111111111;
#define ll long long
bool isprime[n];
int prime[n],j;

void sieve()
{

    long long sq=sqrt(n);
    isprime[2]=0; //as 0 indicates prime
    for(long long i=4;i<=n;i+=2) isprime[i]=1;
    for(long long i=3;i<=sq;i+=2)
    {
        if(isprime[i]==0)
        {
            for(long long j=i*i;j<=n;j+=i)isprime[j]=1;
        }
    }

    long long j=0;
    for(long long i=2;i<=n;i++)
    {
        if(isprime[i]==0)
        {
            prime[j]=i;
            j++;
        }
    }

    /*for(long long i=0;i<j;i++)
    {
        cout<<prime[i]<<endl;
    }*/



}

long long  sumofdivisor(long long a)
{
    long long sum=1,c,i,sq,s;
    sq=sqrt(a)+1;  //whenever a is not square rootable
    for(i=0;prime[i]<sq;i++)
    {
        if(a%prime[i]==0)
        {
            c=1;
            while(a%prime[i]==0)
            {

                a=a/prime[i];
                c=c*prime[i];
            }
             c=c*prime[i];
             s=(c-1)/(prime[i]-1);
             sum=sum*s;
        }
    }

    if(a>1)
    {
       c=a*a;
       s=(c-1)/(a-1);
       sum=sum*s;

    }

    return sum;
}


int main()
{
    sieve();
    long long x,i,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        cin>>x;
       cout<<sumofdivisor(x)-x<<endl;
    }
}
