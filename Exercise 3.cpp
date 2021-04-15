
#include<bits/stdc++.h>
using namespace std;
         int dime(int a){
           return a*2;

         }
         float cir(int a){
           return 2*3.14159*a;

         }
         float area(int a){
           return 3.1416*a*a;

         }

int main(){
     int n;
     cin>>n;
     cout<<"diameter = "<<dime(n)<<endl<<"circum = "<<cir(n)<<endl<<"area = "<<area(n)<<endl;
}
