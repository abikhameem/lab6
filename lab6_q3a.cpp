#include<iostream>
using namespace std;
//write a programe with a function that takes 2 parameters,finnds the maximum,returns the maximum
//define function for finding maximum of the two nubers
//declare values
int maximum(int a1,int a2)
{
if (a1>a2)
{return a1; }
else
 return a2;
}
//driver function
//the programe should ask the user for 2 numbers,then call the function  with the numbers as arguments and tell the user the maximum
int main ()
{ 
int a1,a2,y;
cout<<"enter two numbers:";
cin>>a1>>a2;
y=maximum(a1,a2);//
cout<<"the number which is maximum is :"<<y<<endl;
}
