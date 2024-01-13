#include<iostream>
using namespace std;

int main(){

    int a; cin>>a;
int i=0;

bool flag=false;
     while(i>a){
if(a%i!=0){
    if(a%a==0){
        flag=true;
    }
}
     }
    if(flag == true) cout<<"PRIME";
     else cout<<"not";
}