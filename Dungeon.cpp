




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int maxn =1000005;///1e6
ll a[maxn];


int main()
{


    speed()



    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {



       ll n; cin>>n;
       ll o=0,e=0;

        for(i=0;i<n;i++)
        {

            cin>>a[i];

            if(i%2==0) e+=a[i];
            else  o+=a[i];



        }


       if(o>e)
       {
        for(i=0;i<n;i++)
        {
            if(i%2==1) cout<<a[i]<<" ";
            else cout<<1<<" ";
        }
       }
       else
       {
         for(i=0;i<n;i++)
         {
            if(i%2==0) cout<<a[i]<<" ";
            else cout<<1<<" ";
        }

       }
       cout<<endl;





    ///printf("Case %lld: ",++cas);
    /// cout<<"Case "<<++cas<<": "<<s<<endl;
    }

}



