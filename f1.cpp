#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define   sc3(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1(a)           printf("%lld\n",(a))
#define    p2(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))
#define    nl             cout<<"\n"
#define c(x)       cout<<x<<endl
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define f1(i,a,b)  for(ll i=a;i<b;i++)
#define f2(i,a,b) 	for(ll i=a;i<=b;i++)
#define fr(i,a,b)   for(ll i=a;i>=b;i--)
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define getar(a,n)           for(int i=0;i<n;i++) cin>>a[i]
#define getar1(a,n)           for(int i=1;i<=n;i++) cin>>a[i]
#define putar(a,n)           for(int i=0;i<n;i++) cout<<a[i]<<" "
#define putar1(a,n)           for(int i=1;i<=n;i++) cout<<a[i]<<" "
#define all(a)                  a.begin(),a.end()
#define lla(A)                  A.rbegin(), A.rend()
#define unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end())
#define pb                      push_back
#define mk                      make_pair
#define ff                      first
#define ss                      second
#define greatersrt(v)  sort(v.begin(),v.end(),greater<ll>())
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define mem(a,x)                memset(a,x,sizeof(a))
#define see_you                     return 0
#define sorta(a,n)                   sort(a,a+n)
#define SORT(v)                 sort(v.begin(),v.end())
#define REV(v)                  reverse(v.begin(),v.end())
int caseno=0;

#define  printcase             printf("Case %d: ",++caseno)
#define Debug                   cout<<endl<<"AND I AM IRONMAN"<<endl;
#define binleastsigonebit(x)    __builtin_ffs(x)
#define binleadingzeroes(x)     __builtin_clz(x)
#define bintrailingzeroes(x)    __builtin_ctz(x)
#define bintotalones(x)         __builtin_popcount(x)

//Datatypes
#define ll                      long long
#define ULL                     unsigned long long
#define LD                      long double
#define UI                      unsigned int
#define US                      unsigned short

//Constants
const int MOD = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
const int maxn = 200000;
#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209




using namespace std;

//from a loser
ll n,i,j,k,l,p,e,f,g,h,q,w,z,y,c,x,t;
ll a[maxn],b[maxn];
ll mat[505][505];

int chek(ll val)
{
    mat[x][y]=val;
    ll s1=0,s2=0,s3=0,s4=0;
    mem(a,0);mem(b,0);

    f1(i,0,n)
    {
        f1(j,0,n)
        {
            a[i]+=mat[i][j];
            b[i]+=mat[j][i];
        }
    }


    ll cnt=0,cnt1=0;
    f1(i,0,n-1)
    {
        if(a[i]!=a[i+1]) cnt++;
        if(b[i]!=b[i+1]) cnt1++;
    }

    f1(i,0,n)
    {
        f1(j,0,n)
        {
            if(i==j) s3+=mat[i][j];
            if( (i + j) == (n - 1) ) s4+=mat[i][j];
        }
    }
    //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
    if(!(cnt) and !(cnt1)  and s3==s4) return 1;
    else return 0;
}

ll chek1(ll val)
{

}

int main()
{
    flash()
    cin>>n;
    f1(i,0,n)
    {
        f1(j,0,n)
        {
             cin>>mat[i][j];
        }

    }
    f1(i,0,n)
    {
        f1(j,0,n)
        {
            if(mat[i][j]==0)
            {
                x=i;y=j;break;
            }
        }
    }

    //cout<<chek(1)<<endl;
    ll lo=1,hi=1e18;
    while(hi-lo>1)
    {
        ll mid=(lo+hi)/2;
        if(chek(mid)) lo=mid;
        else hi=mid;
    }
    if(lo>1e18) cout<<-1<<endl;
    else cout<<lo<<endl;






}
