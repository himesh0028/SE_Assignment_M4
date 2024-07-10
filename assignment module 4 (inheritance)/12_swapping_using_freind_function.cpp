/*12.Write a program to swap the two numbers using
friend functionwithout using third variable*/
#include<iostream>
using namespace std;
class swapping
{
     private:
               int a,b,c;
     public:
               void get_value()
               {
                    cout<<"\n\t Enter a : ";
                    cin>>a;
                    cout<<"\n\t Enter b : ";
                    cin>>b;
                    cout<<"\n\n\n\t Before Swapping ";
                    cout<<"\n\t a : "<<a;
                    cout<<"\n\t b : "<<b;
               }
               friend void print_value(swapping C);
};
void print_value(swapping C)
{
     C.c=C.a;
     C.a=C.b;
     C.b=C.c;
     cout<<"\n\n\n\t After Swapping ";
     cout<<"\n\t a : "<<C.a;
     cout<<"\n\t b : "<<C.b;
}
int main()
{
     swapping s;
     s.get_value();
     print_value(s);
}
