
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=500005;

ll a[M];


ll eval(ll a, ll b, char op)
{
    if (op == '*')
        {
        return a * b;
    }
    else if (op == '+')
    {
        return a + b;
    }
    else if (op == '-')
    {
    return a - b;
    }
    else
    {
        assert(0);
    }
}

ll fun(const string &str)
{
    ll n = str.length()/2 + 1;
    vector< vector<ll> > m(n, vector<ll> (n, 0));
    vector< vector<ll> > dp(n, vector<ll> (n, 0));

    vector<ll>numbers;

    vector<char >op;

    for (ll i = 0; i <  str.size(); i++)
    {
        if (i%2==0){numbers.push_back((ll) str[i] - 48);}
        else{op.push_back(str[i]);}
    }

    for(ll i = 0; i < numbers.size(); i++)
    {
        m[i][i] = numbers[i];
        dp[i][i] = numbers[i];
    }


    for (ll s=1; s < numbers.size(); s++){
        for (ll i=0; i < numbers.size()-s; i++){
            ll j = i + s;
            ll max_value = numeric_limits<long>::min();
            ll min_value = numeric_limits<long>::max();
            for (ll k = i; k <=  j-1; k++){
                ll a = eval(dp[i][k], dp[k+1][j], op[k]);
                ll b = eval(dp[i][k], m[k+1][j], op[k]);
                ll c = eval(m[i][k], dp[k+1][j], op[k]);
                ll d = eval(m[i][k], m[k+1][j], op[k]);
                max_value = max(max_value,max(a, max(b, max(c, d))));
                min_value = min(min_value,min(a, min(b, min(c, d))));
            }
            pair<long, long>min_max;
            min_max.first = min_value;
            min_max.second = max_value;
            m[i][j] = min_max.first;
            dp[i][j] = min_max.second;
        }
    }
    return dp[0][numbers.size()-1];
}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;

    string s;
   cin >> s;
   cout << fun(s) << '\n';

    return 0;

}



