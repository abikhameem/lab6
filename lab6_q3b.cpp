
#include<iostream>
using namespace std;
//write a programe with a function that takes 2 int parameters,finnds the maximum as void and takes a thhird passs by referance parameter
void maximum(int a,int b ,int &c)
{
if (a>b){
c=a;
}
else c=b;
}
//display the number which is maximum
int main() 
{ 
int a,b,c;
cout<<"Enter two numbers: ";
cin>>a>>b;
maximum(a,b,c);
cout<<"the maximum number is : "<<c<<endl;
return 0;
}
