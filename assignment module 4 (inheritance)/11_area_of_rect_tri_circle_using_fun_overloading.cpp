/*11.Write a program to calculate the area of circle,
rectangle and triangleusing Function Overloading
Rectangle: Area *
breadth Triangle: ½
*Area* breadth
Circle: Pi * Area
*Area
*/
#include<iostream>
using namespace std;
class value
{
     private:
               int a;
     public:
               void aera(int l,int w )
               {
                    a = l * w ;
                    cout<<"\n\t Area of Rectangle is : "<<a;
          
               }
               void aera(float b,int l, int w)
               {
                    a = b * l * w ;
                    cout<<"\n\t Area Of Triangle is : "<<a;
               }
               void aera(int l)
               {
                    a = 3.14 * l * l ;
                    cout<<"\n\t Area of Circle is : "<<a;
               }
};
int main()
{
     value v;
     v.aera(2,6);
     v.aera(0.5,5,8);
     v.aera(8);
}
