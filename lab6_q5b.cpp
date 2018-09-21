
#include<iostream>  //library

using namespace std;  //namespace

//pass by reference
void sum(int a1,int b1,int &add)
{
	 add=a1+b1;
}

//pass by reference
void max(int a1,int b1,int &high)
{
	if(a1>b1)          //condition to check for maximum
	  high=a1;

	else
	  high=b1;
}

//pass by reference
void min(int a1,int b1,int &low)
{
	if(a1<b1)          //condition to check for minimum
	  low=a1;

	else
	  low=b1;
}

int main()
{
	//variable declaration
	int a,b,retsum,retmax,retmin,ch;
	char rep='y';
	while(rep=='y')
	{
		//asks user for input
		cout<<"Enter the value of a: "<<endl;
		cin>>a;
		cout<<"Enter the value of b: "<<endl;
		cin>>b;
		cout<<"Enter choice:"<<endl;
		cout<<"1.Sum"<<endl<<"2.Maximum"<<endl<<"3.Minimum"<<endl;
		cin>>ch;
		switch(ch)
		{
			  case 1:sum(a,b,retsum);
				 cout<<"The sum is "<<retsum<<endl;
				 break;

			  case 2:max(a,b,retmax);
				 cout<<"The maximum among the two numbers is "<<retmax<<endl;
				 break;
			  
			  case 3:min(a,b,retmin);
				 cout<<"The minimum among the two numbers is "<<retmin<<endl;
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
