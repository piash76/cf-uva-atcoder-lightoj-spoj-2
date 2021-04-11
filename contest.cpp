#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m;
 cin>>n>>m;
 if(n==m)
 {
     cout<<"0"<<endl;
     return 0;
 }
 if(m==0 || m==1)
 {
     cout<<"1"<<endl;
     return 0;
 }
 if(m==2)
 {
     cout<<"2"<<endl;
     return 0;
 }
 if(m<=n/2)
 {
     cout<<m<<endl;
     return 0;
 }
 if(m>n/2)
 {
     cout<<n-m<<endl;
     return 0;
 }
}

