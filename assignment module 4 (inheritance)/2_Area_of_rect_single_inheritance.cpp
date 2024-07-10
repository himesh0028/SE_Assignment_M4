/*2. Write a C++ Program to find Area of Rectangle using inheritance*/
#include<iostream>
using namespace std;
class Rect
{
	protected :
				float L,W,A;
	public : 
			void get_data()
			{
				cout<<"\n\n\t Enter Length Of Side Of Reactangle : ";
				cin>>L;
				cout<<"\n\n\t Enter Width Of Side Of Reactangle : ";
				cin>>W;
			}
			void print_data()
			{
				cout<<"\n\n\t Length Of Side Of Reactangle : "<<L;
				cout<<"\n\n\t Width Of Side Of Reactangle : "<<W;
			}
};
class Area : public Rect
{
	public :
		
	void print_area()
	{
		cout<<"\n\n\t Area of Reactangle : "<<L*W;
	}
};
int main()
{
	Area A;
	A.get_data();
	A.print_data();
	A.print_area();
}
