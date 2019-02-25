#include<iostream>
using namespace std;

 class complex
{
 int real,img;
  
 public:
 
 void read()
 {
 	cout<<"\nenter real part :";
 	cin>>real;
	cout<<"\nenter imaginary part :";
	cin>>img;
 }

 void display()
 {
	cout<<endl<<real<<" + "<<img<<"i\n";
 }

 complex operator + (complex z)
 {
 	complex temp;
 	temp.real=real+z.real;
	temp.img=img+z.img;
 	return temp;
 }

};

 int main()
{
 complex c1,c2,c3;
 c1.read();
 c2.read();
 c3=c2+c1;
 c3.display();
}


