#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t,l,i,cnt=0;
    string a;

    cin>>t;

    while(t--)
    {
        cin>>l;
        cin>>a;
        for(i=0;i<l;i++)
        {
            if(a[i]!='a' || a[i]!='e' || a[i]!='i' || a[i]!='o' || a[i]!='u')
            {

              if(a[i+1]=='a' || a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u')
              {
                cnt++;
                i++;
              }
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
}
