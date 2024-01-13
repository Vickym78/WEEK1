#include<iostream>
using namespace std;

int main(){
float x=5;
float y=2;
cout<<x/y;
cout<<5/2;//its an integer  answer will be consider
cout<<5.0/2;//consider as flaot
cout<<5/2.0;
//conversion or typecast
/*int a=10,b=3;
cout<<"\n"<<float(a)/b<<endl;//here we change int to float
cout<<a%b;//mod operator*/

// if a<b;a%b=a in computers not in mathematically
// answer is independent of sign of b

//questions 
//1.calculate average of 6 numbers
int a=21,b=22,c=25,d=24,e=22,f=25;
float percentage=float(a+b+c+d+e+f)/6;
cout<<"\n Average of numbers will be : "<<percentage<<endl;
}