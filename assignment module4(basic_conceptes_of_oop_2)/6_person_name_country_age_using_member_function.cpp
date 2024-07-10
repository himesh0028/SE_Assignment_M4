/*6. Write a C++ program to create a class called Person that
has privatemember variables for name, age and country.
Implement member functions to set and get the values of
these variables*/
#include<iostream>
#include<string>
using namespace std;
class person
{
	private: 
			string name,country;
			int age;
			
	public : 
			void get_person()
			{
			cout << "\n\n\tEnter the name: ";
        	getline(cin, name);
        	cout << "\n\n\tEnter the country name: ";
        	getline(cin, country);
        	cout << "\n\n\tEnter the age: ";
        	cin >> age;
			}
			
			void display(){
				cout<<"\n\n\t name : "<<name;
				cout<<"\n\n\t country : "<<country;
				cout<<"\n\n\t age: "<<age;
			}
};
int main()
{
	person p;
	
	p.get_person();
	p.display();
	
	return 0;
}
