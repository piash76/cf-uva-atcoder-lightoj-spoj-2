
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m,i,j,s=0;
     cin>>n>>m;
     int a[n][m];
     int b[n][m];

     for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                    cin>>a[i][j];
            }
     }
     cout<<endl;
     for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                    cin>>b[i][j];
            }
     }
     cout<<endl;
     for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                   if(a[i][j]!=b[i][j]){
                    s=1;
                   }
            }
     }
     if(s==0){
        cout<<"same"<<endl;
     }
     else{
        cout<<"diffrence"<<endl;
     }
}
