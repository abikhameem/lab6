
#include<iostream>  //library

using namespace std;   //namespace

//obtains from user and returns the corresponding value
void accept(string name,float& value)
{
	cout<<"Enter the "<<name<<endl;
	cin>>value;
}

//function that calculates the sales tax and total amount due
void calculate(float unitCst,float units,float taxRt,float &salesTx,float &totDue)
{
	salesTx=(unitCst*units*taxRt)/100;   //calculates sales tax
	totDue=salesTx+(unitCst*units);    //calculates total amount
}


//function that displays the input and the sales tax and total amount due in a systematic manner
void display(float unitCst,float units,float taxRt,float salesTx,float totDue)
{
	calculate(unitCst,units,taxRt,salesTx,totDue);    //calls function 'calculate' to calculate the sales tax and total amount due
	cout<<"The following are the results:"<<endl;
	cout<<"Unit cost: "<<unitCst<<endl;
	cout<<"No. of units: "<<units<<endl;
	cout<<"Tax rate: "<<taxRt<<endl;
	cout<<"Sales tax: "<<salesTx<<endl;
	cout<<"Total amount due: "<<totDue<<endl;
}

int main()
{
	//variable declaration
	float unitCost,unitsPurch,taxRate;
        float salesTax,totalDue;
	//asks user for input 
	accept("cost per unit",unitCost);         
	accept("no. of units purchased",unitsPurch);
	accept("tax rate",taxRate);
	display(unitCost,unitsPurch,taxRate,salesTax,totalDue);           //calls function 'display' to display the results in a systematic manner
	//return statement
	return 0;
}


