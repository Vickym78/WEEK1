#include<iostream>
using namespace std;

int main(){
cout<<"Enter the purchasing price ";
int n; cin>>n;
cout<<"Enter the selling price ";
int x; cin>>x;
if(n<x){
cout<<"Profit is "<<x-n;

}
else if(x<n)
{
cout<<"loss is "<<n-x;

}
else
cout<<"No profit no loss";



}