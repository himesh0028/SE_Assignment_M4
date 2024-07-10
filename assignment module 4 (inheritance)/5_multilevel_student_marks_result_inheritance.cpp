/*5. Assume that the test results of a batch of students are stored
in three differentclasses. Class Students are storing the roll
number. Class Test stores the marks obtained in two
subjects and class result contains the total marks obtained
in the test. The class result can inherit the details of the
marks obtained in the test and roll number of students.
(Multilevel Inheritance)
*/
#include<iostream>
using namespace std;
class students
{
	protected :
				int r_no;
	public :
			void get_student()
			{
				cout<<"\n\n\t Enter Student's Roll number : ";
				cin>>r_no;
			}
};
class test : public students
{
	protected : 
				int sub1,sub2;
	public :
			void get_test(){
			
			cout<<"\n\n\t Enter Marks in Subject 1 : ";
			cin>>sub1;
			cout<<"\n\n\t Enter Marks in Subject 2 : ";
			cin>>sub2;
		}
};
class result : public test
{
	 private :
          int Total;
     public:
          void get_result()
          {
               Total = sub1 + sub2 ;
          }
          
          void print_data()
          {
          	cout<<"\n\n\t Student's Roll number : "<<r_no;
          	cout<<"\n\n\t Marks in Subject 1 : "<<sub1;
			cout<<"\n\n\t Marks in Subject 2 : "<<sub2;
			cout<<"\n\n\t Total Marks : "<<Total;
		  }
};
int main()
{
	result r;
	r.get_student();
	r.get_test();
	r.get_result();
	r.print_data();
}
