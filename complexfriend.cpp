#include<bits/stdc++.h>
using namespace std;

class complx
{
    int r,i;
public:
    complx(){};
    void getval()
    {
        cin>>r>>i;
    }
    friend complx operator+(complx a,complx b);
    void show()
    {
      if(i>=0) cout<<r<<"+"<<i<<"i"<<endl;
      else cout<<r<<i<<endl;
    }
};
complx operator+(complx a,complx b)
{
    complx temp;
    temp.r=a.r+b.r;
    temp.i=a.i+b.i;
    return temp;
}

int main()
{
    complx c1,c2;
    c1.getval();
    c2.getval();
    complx c3;
    c3=(c1+c2);
    c3.show();
}

