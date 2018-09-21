
#include<iostream>   //library

using namespace std;   //namespace

//pass by value
int sum(int a1,int b1)
{
	int add;
	add=a1+b1;         //adds the numbers
	return add;
}

//pass by value
int max(int a1,int b1)
{
	if(a1>b1)          //condition to check for maximum
	  return a1;

	else
	  return b1;
}

//pass by value
int min(int a1,int b1)
{
	if(a1<b1)          //condition to check for minimum
	  return a1;

	else
	  return b1;
}

int main()
{
	//variable declaration
	int a,b,ch;
        char rep='y';
        while(rep=='y')
        {
		//asks for input
		cout<<"Enter the value of a:"<<endl;
		cin>>a;
		cout<<"Enter the value of b:"<<endl;
		cin>>b;
		cout<<"Choose among the following: "<<endl;
		cout<<"1.Sum"<<endl<<"2.Maximum"<<endl<<"3.Minimum"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"The sum is "<<sum(a,b)<<endl;
			       break;

			case 2:cout<<"The maximum among the two is "<<max(a,b)<<endl;
			       break;

			case 3:cout<<"The minimum among the two is "<<min(a,b)<<endl;
			       break;

			default:cout<<"Invalid choice"<<endl;
				break;
		}
		cout<<"Do you want to continue?"<<endl;
		cin>>rep;
        }
	//return statement
	return 0;
}
