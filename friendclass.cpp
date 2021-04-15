#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    int l,b;
public:
    void getval()
    {
        cin>>l>>b;
    }
    void show()
    {
        cout<<l<<b<<endl;
    }
    friend class rectangle2;

};

class rectangle2
{
public:

    void showb(rectangle r)
    {
        cout<<r.l<<" "<<r.b<<endl;
    }
    void areab(rectangle r)
    {
        cout<<r.l*r.b<<endl;
    }
};

int main()
{
    rectangle a;
    a.getval();
    a.show();
    rectangle2 b;
    b.showb(a);
    b.areab(a);
}
