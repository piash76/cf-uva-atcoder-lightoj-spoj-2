#include<bits/stdc++.h>
using namespace std;

class complx
{
    int r,i;
public:
    complx(){};
    complx(int x)
    {
        r=i=x;
    }
    complx(int x,int y)
    {
        r=x;
        i=y;
    }
    complx(complx &c)
    {
        i=c.i;
        r=c.r;
    }
    friend void sum(complx a,complx b);

};
void sum(complx a,complx b)
    {
        complx temp;
        temp.r=a.r+b.r;
        temp.i=a.i+b.i;
        cout<<temp.r<<" "<<temp.i<<endl;
    }

int main()
{
    complx c1(2,3),c2(4,5);
    complx c3;
    sum(c1,c2);

}
