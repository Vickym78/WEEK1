//In nested if else  we use if condition again again in inside if condition 
//Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
/*
#include<iostream>
using namespace std;
int main(){
char n;
cout<<"Enter the number ";
cin>> n;
if(n%3==0 || n%5==0){
    if(n%15==0){ 
    }
    cout<<"number is divisible by either 5 or 3 "<<endl;
         cout<<" But It is not divisible by 15";
    }
   
else
cout<<"not a desired number";

}
*/
//Take input percentage of a student and print the Grade according to marks:

/*#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number ";
cin>> n;
if(n>=91 && n<=100){
cout<<"Excellent";}
if(n>=81 && n<=90){
cout<<"Very good";}
if(n>=71 && n<=80){
cout<<"Good";}
if(n>=61 && n<=70){
cout<<"Can do better";}
if(n>=51 && n<=60){
cout<<"Average";}
if(n>=41 && n<=50){
cout<<"Below average";}
if(n<=40){
cout<<"Fail";}


}*/

//Write a program to check whether a given character is a vowel or a consonant.

/*#include<iostream>
using namespace std;

int main(){
char ch;
cout<<"Enter the character ";
cin>>ch;
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    cout<<"This is vowel in lower case";
}
else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    cout<<"This is vowel in upper case";
}
else
cout<<"It is consonant";

}
*/
//Take 3 numbers input and tell if they can be the sides of a triangle.
/*#include<iostream>
using namespace std;

int main(){

int x,y,z;
cout<<"Enter first side of triangle ";
cin>>x;
cout<<"Enter second side of triangle ";
cin>>y;
cout<<"Enter third side of triangle ";
cin>>z;

if(x+y>z || y+z>x || z+x>y){
    cout<<"They are able to make an traiangle";
}
else{
    cout<<"They are not able to make an triangle";
}
}
*/
//extra one 
#include<iostream>
using namespace std;

int main(){
int num1=5, num2=4, num3=3;
if(num1 > num2 && num1 > num3)
cout<<"number 1"<<endl;
if(num2 > num1 || num2 > num3)
cout<<"number 2"<<endl;
if(num3 > num1 && num3 > num2)
cout<<"number 3"<<endl;
return 0;
}