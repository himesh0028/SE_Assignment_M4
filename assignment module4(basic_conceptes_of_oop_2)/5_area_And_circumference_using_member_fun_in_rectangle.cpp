/*5. Write a C++ program to create a class called Rectangle that
has privatemember variables for length and width. Implement
member functions to calculate the rectangle's area and
perimeter.*/
#include<iostream>
using namespace std;
class rectangle
{
	private : 
			float  l,w,area,perimeter;
	public : 
			void get_rectangle()
			{
				cout<<"\n\n\t enter length of side of rectangle : ";
				cin>>l;
				
				cout<<"\n\n\t enter width of side of rectangle :";
				cin>>w;
			}
			
			void clac_area()
			{
				if(l>0 && w>0){
					area=l*w;
				}else{
					cout<<"\n\n\t enter the length and breadth again ";
				}
			}
			
			void clac_perimeter()
			{
				if(l>0 && w>0){
					perimeter=2*(l+w);
				}else{
					cout<<"\n\n\t enter the length and breadth again ";
				}
			}
			
			void display()
			{
				cout<<"\n\n\t length : "<<l;
				cout<<"\n\n\t width : "<<w;
				cout<<"\n\n\t area of rectangle :"<<area;
				cout<<"\n\n\t perimeter of rectangle :"<<perimeter;
			}
};
int main()
{
	rectangle r;
	r.get_rectangle();
	r.clac_area();
	r.clac_perimeter();
	r.display();
	
	return 0;
}
