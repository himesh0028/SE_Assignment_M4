/*6. Write a C++ Program to show access to Private Public and
Protected using Inheritance
*/
#include<iostream>
using namespace std;
class stud
{
	private :
		string S_name;
	protected :
		int r_no;
	public :
		int marks;
		void get_stud()
		{
			cout<<"\n\n\t Enter Student Name : ";
			cin>>S_name;
		}
		void print_stud()
		{
			cout<<"\n\n\t Student Name : "<<S_name;
		}
};
class stud_per : public stud
{
	public :
			void get_roll()
			{
				cout<<"\n\n\t Enter Student Roll Number : ";
				cin>>r_no;
			}
			void get_marks()
			{
				cout<<"\n\n\t Enter Student Marks : ";
				cin>>marks;
			}
			
			void print_info(){
				cout<<"\n\n\t Enter Student Roll Number : "<<r_no;
				cout<<"\n\n\t Enter Student Marks : "<<marks;
			}
};
int main(){
	stud_per p;
	p.get_stud();
	p.get_roll();
	p.get_marks();
	p.print_stud();
	p.print_info();

}
