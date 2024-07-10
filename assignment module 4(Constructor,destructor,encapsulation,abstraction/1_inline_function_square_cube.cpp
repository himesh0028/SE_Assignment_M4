/*1. Write a program to find the multiplication values and the
cubic values usinginline function
*/
#include<iostream>
using namespace std;

class Math
{
	int x;
	
	public :
			void get_number(int a)
			{
				x=a;
			}
		
			inline void square();
			/*inline void square()
			{
				cout<<"\n\n\t Square : "<<x*x;
			}*/
			
			inline int cube()
			{
				return x*x*x;
			}		
};

inline void Math :: square()
{
	cout<<"\n\n\t Square : "<<x*x;
}
main()
{
	Math M;
	
	int n;
	cout<<"\n\n\n\t Input a number : ";
	cin>>n;
	
	M.get_number(n);
	M.square();
	
	int c;
	c=M.cube();
	cout<<"\n\n\t Cube : "<<c;
}
