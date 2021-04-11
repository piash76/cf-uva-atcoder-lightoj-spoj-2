





///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define pll             pair<ll,ll>
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;

///https://www.youtube.com/watch?v=-xyju56LLMI


const int mod = 1000000007;


const int mx =1000009;///1e6
ll a[mx];

struct cmp ///set,priority queue,map
{
    bool operator()(pll &x,pll &y)
    {
       // return x>y;  ///min heap
        if(x.ff!=y.ff) return x<y;
        else if(x.ff==y.ff)
        {
            return x>y;
        }
    }
};

bool comp(pll &x,pll &y) ///sort,
{
    if(x.ff!=y.ff) return x>y;
    else if(x.ff==y.ff)
    {
     return x<y;
    }
}

int main()
{


    speed()

    ll t,i,j,cas=0;
    ll n;cin>>n;

    ll num=1;

    priority_queue<pll,cmp>q;
    vector<pll> v;

    for(i=1;i<=n;i++)
    {
        ll x;cin>>x;
        q.push({x,num});

        v.push_back({x,num});

        num++;
    }

   // sort(v.begin(),v.end(),comp);

   // for(auto x:v) cout<<x.ff<<" "<<x.ss<<endl;



    ///*
    while(!q.empty())
    {
        cout<<q.top().ff<<" "<<q.top().ss<<endl;
        q.pop();
    }
    //*/


    return 0;

}

/*

3
8 10 8

*/




