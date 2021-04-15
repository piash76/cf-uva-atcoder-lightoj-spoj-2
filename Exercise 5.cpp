#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,s=0,l,sum=0;
     string a,b;
     cin>>a;
    l= a.size()-1;
    for(i=l;i>=0;i--){
            b[s]=a[i];
             s++;

    }
   for(i=0;i<s;i++){
        cout<<b[i];


   }
   for(i=0;i<s;i++){
        if(a[i]!=b[i]){
            sum=1;
            break;
        }

   }
   cout<<endl;
   if(sum==0){
    cout<<"palindrome"<<endl;
   }
   else{
        cout<<"Not palindrome"<<endl;

   }

}

