#include<bits/stdc++.h>
#define N 1001
using namespace std;

vector<int>prime;
int order[N];
bool arr[N];
void sieve()
{
    int k=sqrt(N);
    for(int i=3; i<=k; i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<N; j+=i)
            {
                arr[j]=1;
            }
        }
    }
    arr[1]=1;
    for(int i=4; i<N; i+=2)
    {
        arr[i]=1;
    }

    prime.push_back(2);

    for(int i=3; i<N; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

struct sort_
{
    int num;
    int div;
}store[N];

int s=0;

bool acompare(sort_ lhs, sort_ rhs)
{
    if(lhs.div==rhs.div)
        return lhs.num>rhs.num;
    else
        return lhs.div<rhs.div;
}

void factorization()
{
    int M, divisors, cnt, k=prime.size();
    for(int j=4; j<=N; j++)
    {
        if(arr[j]==1)
        {
            M=j;
            divisors=1;
            for(int i=0; i<k && M!=1; i++)
            {
                cnt=0;
                if(M%prime[i]==0)
                {
                    while(M%prime[i]==0)
                    {
                        cnt++;
                        M/=prime[i];
                    }
                    divisors*=(cnt+1);
                }
            }
            store[s].num=j;
            store[s].div=divisors;
            s++;
        }
    }
}

int main()
{
    sieve();
    factorization();
    order[1]=1;
    int o=2;
    for(int j=prime.size()-1; j>=0; j--)
    {
        order[o++]=prime[j];
    }

    sort(store,store+s,acompare);

    for(int k=0; k<s; k++)
    {
        order[o++]=store[k].num;
    }

    int t, test, n;
    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
        scanf("%d",&n);
        printf("Case %d: %d\n",t,order[n]);
    }
    return 0;
}
