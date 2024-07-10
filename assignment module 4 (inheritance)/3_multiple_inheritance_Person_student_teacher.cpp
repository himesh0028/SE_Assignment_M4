/*3. Create a class person having members name and age. Derive
a class studenthaving member percentage. Derive another
class teacher having member salary. Write necessary
member function to initialize, read and write data. Write also
Main function (Multiple Inheritance)
*/
#include<iostream>
using namespace std;
class person
{
	protected :
				string name;
				int age;
	public :
			void get_person()
			{
				cout<<"\n\n\t Enter Person's Name : ";
				cin>>name;
				cout<<"\n\n\t Enter Person's Age : ";
				cin>>age;
			}
			
};
class Student 
{
	protected :
				float per;
	public :
			void get_student()
			{
				cout<<"\n\n\t Enter Student's Percentage : ";
				cin>>per;
			}
			
	
};
class Teacher : public person,public Student
{
	int salary;
	
	
	public:
			void get_teacher()
			{
				cout<<"\n\n\t Enter Teacher's Salary : ";
				cin>>salary;
			}
			
			void print_data()
			{
			cout<<"\n\n\t Person's Name : "<<name;
			cout<<"\n\n\t Person's Age : "<<age;
			cout<<"\n\n\t Student's Percentage : "<<per;
			cout<<"\n\n\t Teacher's Salary : "<<salary;
			}
};
int main()
{
	Teacher T;
	T.get_person();
	T.get_student();
	T.get_teacher();
	T.print_data();
}
