
#include<bits/stdc++.h>
using namespace std;



#define ll long long
const int N = 10000005;
const int SZ = 5761455 + 3;
///const int SZ=6000000;
///const int SZ=1e6;
bool isprime[N+5];
ll prime[SZ+5],tot;
//bitset<N> isprime;




void sieve()
{

    ll sq=sqrt(N);
    isprime[2]=0; //as 0 indicates prime
    for(ll i=4;i<=N;i+=2) isprime[i]=1; ///o(n)
    for(ll i=3;i<=sq;i+=2) ///O(nlog(log(n)));
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i;j<=N;j+=i)isprime[j]=1;
        }
    }

   // ll j=0;
    for(ll i=2;i<=N;i++)
    {
        if(isprime[i]==0)
        {
            prime[tot]=i;
            tot++;
        }
    }

}


int main()
{


   sieve();

  ll t,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        ll p,q;
        scanf("%lld %lld",&p,&q);

        if(p%q!=0)
        {
           printf("%lld\n",p);
        }
        else if(p<q) { printf("%lld\n",p); }
        else
        {

            ll ans=-1;
            vector<ll>v;
            ll num=q;
            for(i=0;prime[i]*prime[i]<=q;i++)
            {
                if(num%prime[i]==0)
                {
                    v.push_back(prime[i]);
                    while(num%prime[i]==0)
                    {
                        num/=prime[i];
                    }
                }

            }
            if(num>1) v.push_back(num);

           // for(auto x:v) cout<<x<<" ";
            //cout<<endl;
            for(auto x:v)
            {
                ll div=p;
                while(div%x==0)
                {
                    div/=x;
                   /// if(div%q!=0) break;
                }

               ans=max(ans,div);
            }

            printf("%lld\n",ans);


        }

    }

}

