
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define   sc3(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1(a)           printf("%lld\n",(a))
#define    p2(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))

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
#define getar(a,n)           for(int i=0;i<n;i++) scanf("%lld",&a[i])
#define getar1(a,n)           for(int i=1;i<=n;i++) scanf("%lld",&a[i])
#define putar(a,n)           for(int i=0;i<n;i++) printf("%lld ",a[i])
#define putar1(a,n)           for(int i=1;i<=n;i++) printf("%lld ",a[i])
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
#define gp ' '
#define nl                        printf("\n")
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

const int N = 1111111;
#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209


//ll powmod(ll base, ll power) { if (power == 0) return 1; else {ll cur = powmod(base, power / 2); cur = cur * cur; cur = cur % MOD;if (power % 2 == 1) cur = cur * base; cur = cur % MOD; return cur;}




using namespace std;

//from a loser
//ll a[manx],b[maxn];
const int maxn=1e6+10;


//int lps[maxn];

int prefix(string pattern) ///longest prefix that matches with suffix
{
    vector<int> lps(pattern.size(),0);

    int index=0;
    for(int i=1;i<pattern.size();)
    {
        if(pattern[index]==pattern[i])
        {
        lps[i]=index+1;
        index++;i++;
        }
        else
        {
            if(index!=0) index=lps[index-1];
            else { lps[i]=index;i++; }
        }
    }

    return lps[pattern.size()-1];

}

int largest_pre_pal(string s)
{
    string t=s+"?";
    reverse(s.begin(),s.end());
    t+=s;
    return prefix(t);
}







int main()
{
    flash()
    ll i,j,t,cas=0;
    cin>>t;
    while(t--)
    {
        string s,pref="",suf="",mid="";
        cin>>s;
        ll n=s.size();
        ll l=0,r=n-1;
        string p=s;
        reverse(p.begin(),p.end());
        if(s==p) cout<<s<<endl;
        else
        {
            // If some portion of prefix and suffix match, save them for final answer, and strip them off the main string
            while(s[l]==s[r] and l<r)
            {
            l++;r--;
            }
            if(l>0)
            {
                pref=s.substr(0,l);
                suf=pref;
                reverse(suf.begin(),suf.end());
                s=s.substr(l,n-2*l);
            }

            int x1=largest_pre_pal(s);
            reverse(s.begin(),s.end());
            int x2=largest_pre_pal(s);

            if(x1>x2)
            {
                reverse(s.begin(),s.end());
                mid=s.substr(0,x1);
            }
            else mid=s.substr(0,x2);

            cout<<pref<<mid<<suf<<endl;


        }




    //cout<<"Case "<<++cas<<": "<<ans<<endl;
    //printf("Case %d: %lld\n",cas++,ans);
    }


    see_you;
}

