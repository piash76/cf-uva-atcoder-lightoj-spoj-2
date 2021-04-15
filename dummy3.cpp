#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<complex>
#include<cstdio>
#define initdp(a,b) for(int i=0;i<=a;i++)for(int j=0;j<=b;j++)dp[i][j]=-1;
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define ppi pair<pii,int>
#define pip pair<int,pii>
#define ll long long
#define pll pair<ll,ll>
#define rep(i,n) for(int i=0;i<n;i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define inf 1000000001
#define inf1 1000000000000000001
#define mod 1000000007
#define pie 3.14159265358979323846
#define N 1000005
#define mid(l,r) l+(r-l)/2
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int ddx[8]={1,1,0,-1,-1,-1,0,1},ddy[8]={0,1,1,1,0,-1,-1,-1};
void mad(ll &a,ll b){a=(a+b)%mod;if(a<0)a+=mod;}
ll gcd(ll a,ll b){ if(!a)return b;return gcd(b%a,a);}


vector<int>ed[26];
int in[26];
void solve(){
	int n,k;
	cin>>n>>k;
	vector<string> t[n];
	for(int i=0;i<n;i++){
		int p;
		cin>>p;
		rep(j,k){
			string s;
			cin>>s;
			t[p].pb(s);
		}
	}
	vector<string>s;
	for(int i=0;i<n;i++)for(int j=0;j<k;j++)s.pb(t[i][j]);
	n=s.size();
	vector<char> v;
	int mk[26]={0};
	for(int i=0;i<n;i++)for(int j=0;j<s[i].size();j++)mk[s[i][j]-'a']=1;
	for(int i=0;i<n-1;i++){
		int j=0;
		while(s[i][j]==s[i+1][j]&&j+1<s[i].size()&&j+1<s[i+1].size())
			j++;
		if(s[i][j]!=s[i+1][j]){ed[s[i][j]-'a'].pb(s[i+1][j]-'a');in[s[i+1][j]-'a']++;}
		else if(s[i].size()>s[i+1].size()){
			cout<<"IMPOSSIBLE";
			return ;
		}
	}
	vector<int>res;
	priority_queue<int>pq;
	for(int i=0;i<26;i++)if(in[i]==0)pq.push(i);
	while(!pq.empty()){
		int v=pq.top();
		pq.pop();
		res.pb(v);
		for(int j:ed[v]){
			in[j]--;
			if(!in[j])pq.push(j);
		}
	}
	if(res.size()!=26)cout<<"IMPOSSIBLE";
	else for(int i:res){
		if(!mk[i])continue;
		cout<<char(i+'a');
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	//cin>>t;
	t=1;
	while(t--){
		solve();
	}
}
