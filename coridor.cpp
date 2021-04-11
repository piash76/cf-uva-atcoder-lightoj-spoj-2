
    #include<bits/stdc++.h>
    using namespace std;
    long long gcd(long long a,long long b){return a%b==0?b:gcd(b,a%b);}
    long long a[3];
    int main(){
    	int q;
    	cin>>a[1]>>a[2]>>q;
    	long long g=gcd(a[1],a[2]);
    	a[1]/=g,a[2]/=g;
    	while(q--){
    		long long x,b,c,d;
    		cin>>x>>b>>c>>d;
    		if((b-1)/a[x]==(d-1)/a[c]){
    			puts("yes");
    		}
    		else
    			puts("no");
    	}
    }
