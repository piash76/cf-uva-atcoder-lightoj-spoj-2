#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{

    int i,t;
    string cmnd, url;
    deque<string> x,y;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        x.clear();
        y.clear();
        x.push_back("http://www.lightoj.com/");

        cout<< "Case " <<i<<":"<<endl;
        while(cin>>cmnd && cmnd != "QUIT")
        {
            if(cmnd =="VISIT")
            {
                cin>>url;
                y.clear();
                x.push_back(url);
                cout<< url <<endl;
            }
            else if(cmnd == "BACK"){
                if(x.size()<2)
                {
                    cout<< "Ignored" <<endl;
                    continue;
                }
                y.push_back(x.back());
                x.pop_back();

                if(!x.empty()) cout<< x.back() <<endl;
                else cout<< "Ignored" <<endl;
            }
            else
            {
                if(y.empty())
                {
                    cout<< "Ignored" <<endl;
                    continue;
                }
                x.push_back(y.back());
                y.pop_back();

                if(!x.empty()) cout<< x.back() <<endl;
                else cout<< "Ignored" <<endl;
            }
        }
    }


}


