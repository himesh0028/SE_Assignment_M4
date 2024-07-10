/*1. Assume a class cricketer is declared. Declare a derived class
batsman from cricketer. Data member of batsman. Total
runs, Average runs and best performance. Member functions
input data, calculate average runs, Display data. (Single
Inheritance)
*/
#include<iostream>
using namespace std;
class cricketer
{
	protected :
				string c_name;
				int C_number,T_match;
	public:
			void get_data()
			{
				cout<<"\n\n\t Enter Cricketer Name : ";
				cin>>c_name;
				cout<<"\n\n\t Enter Cricketer Number : ";
				cin>>C_number;
				cout<<"\n\n\t Enter Total Matches Played By Cricketer : ";
				cin>>T_match;
			}
			
			void print_data()
			{
				cout<<"\n\n\t Cricketer Name : "<<c_name;
				cout<<"\n\n\t Cricketer Number : "<<C_number;
				cout<<"\n\n\t Total Matches Played By Cricketer : "<<T_match;	
			}
};

class Batsman : public cricketer
{
	private : 
			int T_run,Avg_run,B_perf;
	public :
			void get_info()
			{
				cout<<"\n\n\t Enter Total Run Scored By Batsman : ";
				cin>>T_run;
				cout<<"\n\n\t Enter Batsman Best Performance Ever : ";
				cin>>B_perf;
			}
			void print_info()
			{
				cout<<"\n\n\t Total Run Scored By Batsman : "<<T_run;
				cout<<"\n\n\t Batsman Best Performance Ever : "<<B_perf;
			}
			
			void cal_average()
     		{
     		   Avg_run = T_run/ T_match ;
        	   cout<<"\n\t Avearge Runs : "<<Avg_run;
     		}

};
int main()
{
	Batsman B;
	B.get_data();
	B.get_info();
	B.print_data();
	B.print_info();
	B.cal_average();
}
