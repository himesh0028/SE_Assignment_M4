/*13.Write a program to find the max number from given
two numbersusing friend function*/
#include<iostream>
using namespace std;

class Find_Max
{
		int x, y;
		
		public :
				void get_numbers()
				{
					cout<<"\n\n\n\t Input x : ";
					cin>>x;
					cout<<"\n\n\n\t Input y : ";
					cin>>y;
				}
				
				void print_numbers()
				{
					cout<<"\n\n\n\t x : "<<x;
					cout<<"\n\n\n\t y : "<<y;
				}
				friend void max_number(Find_Max F);
				
};

void max_number(Find_Max F)
{
	if(F.x>F.y)
		cout<<"\n\n\n\t "<<F.x<<" is max. ";
	
	else 
		cout<<"\n\n\n\t "<<F.y<<" is max. ";
	};
	
main()
{
	Find_Max obj;
	
	obj.get_numbers();
	obj.print_numbers();
	
	max_number(obj);
}
