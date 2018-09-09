
#include<iostream>
using namespace std;
//write a prograam with a function that takes 2 int parameter,adds them as void, takes a 3rd variables passed by reference and puts the sum in that
void sum(int a, int b,int &c)
{
 c=a+b;
}
//The program should ask the user for 2 numbers,call the function with numbers as argument and tell the sum to the users
int main()
{
int a,b,c;
cout<<"Enter the two numbrers:"<<endl;
cin>>a>>b;
sum(a,b,c);//f(x)
cout<<"The sum of two numbers : "<<c<<endl;
return 0;
}
