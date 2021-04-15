#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
   int  c,d,i;
   scanf("%d %d",&c,&d);
   if(abs(c-d)>1 && c>d && abs(c-d)<8)
   {
       cout<<-1<<endl;
   }
   else if(c==d)
   {
       cout<<(c*10)<<" "<<(d*10)+1<<endl;
   }
    else if(c<d && abs(c-d)==1)
    {
        cout<<(c*10)+9<<" "<<(d*10)<<endl;
    }
    else if(c>d && abs(c-d)==8)
    {
         cout<<(c*10)+9<<" "<<d*100<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

   return 0;


}

