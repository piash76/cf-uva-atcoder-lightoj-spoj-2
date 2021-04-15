#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>
#define MIN -2147483647;
#define FIO() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long int ll;

ll a[1005],m,n;

bool isTrue(ll cp){
    ll i=0,c=0,cn=1;
    while(i<m){
        if(a[i]>cp) return false;
        else if(c+a[i]<=cp) c+=a[i],i++;
        else{
            if(cn==n && i<m) return false;
            c=0;
            cn++;
        }
    }

    return true;
}

int main()
{
    FIO();
    int t,i=1;
    scanf("%d",&t);
    while(i<=t){
        ll j,ans=0;
        scanf("%lld %lld",&m , &n);
        for(j=0;j<m;j++) scanf("%lld",&a[j]);
        ll low=0,high=10000000000000000;
        while(low<=high){
            ll mid = (low+high)/2;
            if(isTrue(mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        printf("Case %d: %lld\n",i,ans); i++;
    }
    return 0;
}
