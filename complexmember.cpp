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
    complx  operator+(complx x)
    {
        complx temp;
        temp.r=r+x.r;
        temp.i=i+x.i;
        return temp;
    }
    void show()
    {
      if(i>=0) cout<<r<<"+"<<i<<"i"<<endl;
      else cout<<r<<i<<endl;
    }
};

int main()
{
    complx c1,c2;
    c1.getval();
    c2.getval();
    complx c3;
    c3=(c1+c2);
    c3.show();
}


