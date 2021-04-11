

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

int fun2(int W, vector<ll>& w)
{
	vector<vector<ll>> dp(w.size() + 1, vector<ll>(W + 1));

	for (size_t i = 0; i <= W; i++)  dp[0][i] = 0;
	for (size_t i = 0; i <= w.size(); i++)  dp[i][0] = 0;

	for (size_t i = 1; i <= w.size(); i++)
    {
		for (size_t j = 1; j <= W; j++)
		{
			if (j >= w[i - 1])
			{
				dp[i][j] = max(w[i - 1] + dp[i - 1][j - w[i - 1]],
								   dp[i - 1][j]);
			} else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	vector<bool> marks(w.size(), false);
	int ans = 0;
	if (dp[w.size()][W] != W) {
		return dp[w.size()][W];
	} else {
		ans = dp[w.size()][W];
	}
	int i = w.size();
	int j = W;
	int wt_r = W;
	while (i > 0 and j > 0) {
		if (w[i - 1] + dp[i - 1][j - w[i - 1]] == wt_r) {
			// cout << w[i - 1] << " ";
			marks.at(i - 1).flip();
			wt_r -= w[i - 1];
			j = j - w[i - 1];
			i = i - 1;
		} else if (dp[i - 1][j] == wt_r) {
			i = i - 1;
		}
	}
	for (int i = w.size() - 1; i >= 0; i--)
    {
		if (marks.at(i)) { w.erase(w.begin() + i); }
	}

	return ans;
}



bool fun(vector<ll>& A)
{
	ll n = accumulate(A.begin(), A.end(), 0);
	if (n % 3 != 0 or A.size() < 3 or
		*max_element(A.begin(), A.end()) > n / 3) {
		return false;
	}

	sort(A.begin(), A.end());

	vector<ll> partitions(3, 0);

	bool pt1 = fun2(n / 3, A) == n / 3;
	bool pt2 = fun2(n / 3, A) == n / 3;

	return pt1 and pt2;
}
int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;

    ll n;
    cin>>n;
    vector<ll> ar(n);

    for (size_t i = 0; i < ar.size(); ++i) cin >>ar[i];

    cout<<fun(ar)<<'\n';



    return 0;

}





