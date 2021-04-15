

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
const int M=500005;

ll a[M],b[M],c[M],ans[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,m;cin>>n>>m;

        for(i=1;i<=n;i++) cin>>a[i];
        for(i=1;i<=n;i++) cin>>b[i];


        for(i=1;i<=m;i++)
        {
            cin>>c[i];

        }


        ll cnt=0;
        for(i=1;i<=n;i++) if(a[i]!=b[i]) cnt++;

        if(cnt>m) cn;
        else
        {
            multimap<ll,ll> m1,m2; ///m1 for required color, m2 for overlapping


            for(i=1;i<=n;i++)
            {
                if(a[i]==b[i]) m2.insert(make_pair(a[i],i));
                if(a[i]!=b[i])
                {
                    m1.insert(make_pair(b[i],i));
                }
            }


            bool f=true;

            ll last=c[m],voga_idx;

            auto it1=m1.find(last);
            auto it2=m2.find(last);

            if(it1==m1.end() and it2==m2.end()) f=false;
            else
            {
                if(it1!=m1.end())
                {
                    ans[m]=it1->ss;
                  voga_idx=it1->ss;
                  m1.erase(it1);
                }
                else
                {
                    ans[m]=it2->ss;
                   voga_idx=it2->ss;
                   m2.erase(it2);
                }

                a[voga_idx]=b[voga_idx];



            }

            //cout<<"VOGA IDX "<<voga_idx<<endl;


            if(!f)
            {
               // cout<<"HERE"<<endl;
                cn;
            }
            else
            {
                ll idx=1;

            for(i=1;i<m;i++)
            {
                ll val=c[i];
                //cout<<"VAL "<<val<<endl;

                if(m1.find(val)!=m1.end() )
                {

                   // cout<<"HERE 1 "<<endl;

                    auto it=m1.find(val);
                    ll value=it->ff;
                    ll indx=it->ss;

                    ans[idx++]=indx;

                    a[indx]=val;

                    m1.erase(it);




                    auto it1=m2.find(a[indx]);
                    if(it1!=m2.end()) m2.erase(it1);

                }
                else if(m2.find(val)!=m2.end() )
                {

                   // cout<<"HERE 2 "<<endl;

                     auto it=m2.find(val);
                    ll value=it->ff;
                    ll indx=it->ss;

                    ans[idx++]=indx;

                    //m2.erase(it);
                }
                else
                {
                    //cout<<"HERE 3 "<<endl;

                    ans[idx++]=voga_idx;


                }


            }

            bool f1=true;

            for(i=1;i<=n;i++) if(a[i]!=b[i]) {f1=false;break;}

           /* cout<<"HERE"<<endl;
            for(auto x:m1) cout<<x.ff<<" "<<x.ss<<endl;

            /*for(i=1;i<=n;i++) cout<<a[i]<<" ";
            cout<<endl;*/



            if(m1.size() or f1==false)
            {
                //cout<<"HERE "<<endl;
                cn;
            }
            else
            {
                cy;
                for(i=1;i<=m;i++) cout<<ans[i]<<" ";
                cout<<endl;


            }



            }







        }




    }

    return 0;

}



