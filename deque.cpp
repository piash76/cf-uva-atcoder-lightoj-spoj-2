#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{

    int t,i,j,n,m,x;

    cin>>t;
    for(i=1;i<=t;i++)
    {
       printf("Case %d:\n",i);
       cin>>n>>m;
        deque<int>q;
        string s;

    while(m--)
    {
    cin>>s;
    if(s=="pushLeft")
    {
        cin>>x;
        if(q.size()!=n)
        {
               q.push_front(x);
             cout<<"Pushed in left: "<<x<<endl;

        }
        else
            cout<<"The queue is full"<<endl;
    }
    else if(s=="pushRight")
    {
        cin>>x;
        if(q.size()!=n)
        {
               q.push_back(x);
             cout<<"Pushed in right: "<<x<<endl;

        }
        else
            cout<<"The queue is full"<<endl;
    }
   else if(s=="popLeft")
    {
        if(q.empty())cout<<"The queue is empty"<<endl;
        else{
            cout<<"Popped from left: "<<q.front()<<endl;
            q.pop_front();
            }

    }
    else if(s=="popRight")
    {
          if(q.empty())cout<<"The queue is empty"<<endl;
        else{
            cout<<"Popped from right: "<<q.back()<<endl;
            q.pop_back();
        }
    }



    }



}

return 0;
}
