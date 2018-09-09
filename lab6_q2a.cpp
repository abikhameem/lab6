#include<iostream>
using namespace std;
//write a prograam with a function that takes 2 int parameter,adds them and returns the sum
int sum(int a, int b)
{int c=a+b;
return c;
}
//The program should ask the user for 2 numbers,call the function with numbers as argument and tell the sum to the users
int main()
{
int a,b,y;
cout<<"Enter the two numbrers:"<<endl;
cin>>a>>b;
y=sum(a,b);//y=f(x)
cout<<"The sum of two numbers : "<<y<<endl;
return 0;
}
