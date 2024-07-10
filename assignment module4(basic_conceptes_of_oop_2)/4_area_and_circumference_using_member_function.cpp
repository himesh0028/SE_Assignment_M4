/*4. Write a C++ program to implement a class called Circle that
has private member variables for radius. Include member
functions to calculate thecircle's area and circumference.
*/
#include<iostream>
using namespace std;
class Circle
{
	private: 
			int radius;
			static const float pi=3.14;
			float area, circumference;
	public:
			void get_Circle()
			{
				cout<<"\n\n\t enter the radius of circle : ";
				cin>>radius;
			}
			
		void calculate_area()
		{
			if(radius>0){
				area=pi*radius*radius;
			}else{
				cout<<"\n\n\t enter the radius again ";
			}
		}
		void calculate_circumference()
		{
			if(radius>0){
				circumference=2*pi*radius;
			}else{
				cout<<"\n\n\t enter the radius again ";
			}
		}
		
		void display()
		{
			cout<<"\n\n\t radius of circle: "<<radius;
			cout<<"\n\n\t area of circle : "<<area;
			cout<<"\n\n\t circumference of circle: "<<circumference;
		}
};
int main()
{
	Circle C;
	C.get_Circle();
	C.calculate_area();
	C.calculate_circumference();
	C.display();
	
	return 0;
}
