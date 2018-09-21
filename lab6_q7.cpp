
#include<iostream>   //library

using namespace std;   //namespace

//call by value
char toUpper(char a1)
{
	return a1-32;             //returns uppercase character
}

//call by value
char toLower(char a1)
{
	return a1+32;             //returns lowercase character
}

int main()
{
	//variable declaration
	char a;
	//asks user for input
	cout<<"Enter a character: "<<endl;
	cin>>a;
	if(a>='A' && a<='Z')    //checks if the given input is uppercase or not
	  cout<<toLower(a)<<endl;

	else if(a>='a' && a<='z')    //checks if the given input if lowercase or not
	  cout<<toUpper(a)<<endl;
     
        else
          cout<<"Not an alphabet"<<endl;

	//return statement
	return 0;
}


