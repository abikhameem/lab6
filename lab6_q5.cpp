#include<iostream>
using namespace std;
//write a program that includes sum,maximumand minimum
//finding sum
int sum(int a,int b)
{
int s=a+b;
return s;
}
//finding maaximum
int max(int a, int b)
{
if(a>b) 
{return a;}
else
return b;
}
//finding minimum
int min(int a,int b)
{
if(a<b) 
{return a;}
else
return b;
}
//write a main function that ask users to input two variablles and what operation he wants to do accordingly
//display output
int main()
{   int a,b,i;
 cout<<"Enter the two numbers:";
 cin>>a>>b;
cout<<"what operation would you like to perform:finding sum,finding maximum or finding minimum???"<<endl;
cout<<"for sum,press 1"<<endl;
cout<<"for max,press 2"<<endl;
cout<<"for min,press 3"<<endl;
//output
cin>>i;
if(i==1)
{
cout<<"The sum of the two numbers is :"<<sum(a,b)<<endl;
}
else if(i==2)
{
cout<<"The maximum number is :"<<max(a,b)<<endl;
}
else if(i==3)
{
cout<<"The minimum number is :"<<min(a,b)<<endl;
}
else
cout<<"INVALID INPUT";
return 0;
}
