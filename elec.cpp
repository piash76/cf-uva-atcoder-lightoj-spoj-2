#include <iostream>
#include <map>
using namespace std;


int main()
{
    map<int,int> vote;
    int i,n,m,k;
    cin>>n>> m;
    k=m;
    while(m--){
        int x; cin >> x;
        vote[x]++;
    }
    for(i=1;i<=n;i++){
        int c=vote[i];
        double per = (double)c/k;
        printf("%.2lf%\n",per*100);
    }
    return 0;
}
