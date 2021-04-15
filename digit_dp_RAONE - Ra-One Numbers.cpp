
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;

const int maxn = 211111;  ///2e5






///the number of numbers whose even position digit sum-odd =1
///indexing starting from 1 from back

int ar[15];
int n;
int dp[12][90][90][2];

int solve(int pos,int sum1,int sum2,bool flag)   ///sum1==even and sum2==odd
{
    //cout<<"POS "<<pos<<" SUM "<<sum<<" flag "<<flag<<endl;

    if(pos==0)
    {
        if(sum1-sum2==1) return 1;
        else return 0;
        //return sum;
    }

    if(dp[pos][sum1][sum2][flag]!=-1) return dp[pos][sum1][sum2][flag];

    int lim=9;
    if(flag==false) lim=ar[pos];


    int s=0;
    for(int i=0;i<=lim;i++)
    {
        ///295 for n=345
        if(flag)
        {
           if(pos&1) s+=solve(pos-1,sum1,sum2+i,true);
           else s+=solve(pos-1,sum1+i,sum2,true);
        }

        else if(i<lim)
        {
           if(pos&1) s+=solve(pos-1,sum1,sum2+i,true);
           else s+=solve(pos-1,sum1+i,sum2,true);

        }
        else
        {
            if(pos&1) s+=solve(pos-1,sum1,sum2+i,false);
            else s+=solve(pos-1,sum1+i,sum2,false);
        }

    }

    return dp[pos][sum1][sum2][flag]=s;
}


int main()
{

    flash()
    int i,j,k,t,cas=0;
    //cin>>t;

    scanf("%d",&t);
    while(t--)
    {


   char num1[10],num2[10];
   scanf("%s %s",num1,num2);

   int sz1=strlen(num1);
   int sz2=strlen(num2);


    n=sz2;
    int idx=n;
    for(i=0;i<n;i++)
    {
        ar[idx--]=num2[i]-'0';
    }

     memset(dp,-1,sizeof(dp));
    int ansr=solve(sz2,0,0,false);
   // cout<<"ANSr "<<ansr<<endl;






    int x1=0,x2=0,f=0;

    n=sz1;

    if(n&1)
    {
        for(i=0;i<n;i++)
        {
            if(i&1) x1+=(num1[i]-'0');
            else x2+=(num1[i]-'0');
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(i&1) x2+=(num1[i]-'0');
            else x1+=(num1[i]-'0');
        }
    }

   // cout<<x1<<" "<<x2<<endl;


    if(x1-x2==1) f=1;

   // cout<<"NUM1 "<<num1<<endl;

   memset(dp,-1,sizeof(dp));
    n=sz1;
     idx=n;
    for(i=0;i<n;i++)
    {
        ar[idx--]=num1[i]-'0';
    }


    int ansl=solve(sz1,0,0,false);
    //cout<<"ANSL "<<ansl<<endl;

   //cout<<ansr-ansl+f<<endl;
   printf("%d\n",ansr-ansl+f);







   // cout<<ans<<endl;

    }





}






