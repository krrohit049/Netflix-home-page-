//Write a Menu Driven Program to implement arithmetic operators in C++.

#include<iostream>
using namespace std;

void add()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<"\nAddition = "<<a+b<<endl;
}

void sub()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<"\nSubtraction = "<<a-b<<endl;
}

void multi()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<"\nMultiplication = "<<a*b<<endl;
}

void div()
{
	int a,b;
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<"\nDivison = "<<a/b<<endl;
}


void arithmetic()
{
	int ch;
	while(1)
	{
		cout<<"\n1.Addition";
		cout<<"\n2.Subtraction";
		cout<<"\n3.Multiplication";
		cout<<"\n4.Division";
	
		cout<<"\n6.Exit";
		
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				multi();
				break;
			case 4:
				div();
				break;	
		
			case 5:
				exit(1);
				break;
			default:
				cout<<"\nInvalid Choice! Please Enter a Valid Choice.\n";
		}
	}
}	int main()
	
{

	int ch;
	while(1)
	{
		cout<<"\n\t\t\t\t----------------------MENU DRIVEN PROGRAM------------------------"<<endl;
		cout<<"\n1.Arithmetic Operators";
	
		cout<<"\n2.Exit";
		
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				arithmetic();
				break;
		
			case 2:
				exit(1);
				break;
			default:
				cout<<"\nInvalid Choice! Please Enter a Valid Choice.\n";
		}
	}

}

