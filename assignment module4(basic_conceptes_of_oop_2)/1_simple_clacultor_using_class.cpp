//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class Calculator
{

				int a,b;
				
				
	public : 
				void get_num()
				{
					cout<<"\n\n\t enter a : ";
					cin>>a;
					
					cout<<"\n\n\t enter b : ";
					cin>>b;
				}
				
				void put_num()
				{
					cout<<"\n\n\t n1= "<<a;
					cout<<"\n\n\t n2= "<<b;
				}
				void add();
				void sub();
				void mul();
				
};
	void Calculator :: add() //scope resultion operator to resolve scope.
	{
		cout<<"\n\n\t Addition = "<<a+b;
	}
					
	void Calculator :: sub()
	{
		cout<<"\n\n\t Subtraction = "<<a-b;
	}
					
	void Calculator :: mul()
	{
		cout<<"\n\n\t Multiplication = "<<a*b;
	}
main()
{
	Calculator obj;
	
	obj.get_num();
	obj.put_num();
	obj.add();
	obj.sub();
	obj.mul();
}
