#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,s=0,sum=0,i,a[100];
     cin>>n;
     for(i=0;i<n;i++){
            cin>>a[i];
        if(a[i]%2==0){
            s++;
        }
        else{
            sum++;
        }
     }
     cout<<"Even= "<<s<<endl<<"ODD= "<<sum<<endl;
}
