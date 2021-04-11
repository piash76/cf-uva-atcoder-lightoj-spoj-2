    #include <bits/stdc++.h>
    using namespace std;

    int a,b,c,n,dp[4010];
    int solve(int n){
        if (n == 0)return 0;
        if(n < 0)return -1e5;
        if(!dp[n]) dp[n] = max(solve(n-a),max(solve(n-b),solve(n-c)))+1;
        return dp[n];
    }
    int main()
    {
        cin>>n>>a>>b>>c;
        cout<<solve(n);
        return 0;
    }
