
    #include<bits/stdc++.h>
    #define ll long long
    #define see_you return 0
    #define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    using namespace std;

    int main()
    {
        godspeed()
        ll i,j,n,a,b,c,r,t,x,y,l,cas=0;
        cin>>t;
        while(t--)
        {
            cin>>a>>b>>l;
           printf("Case %d: ",++cas);
           cout<<__gcd(a,b)<<endl;
            if(__gcd(a,b)==1) cout<<l/(a*b)<<endl;
            else cout<<"impossible"<<endl;
        }




    }
