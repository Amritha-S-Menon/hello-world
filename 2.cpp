#include<iostream>
using namespace std;

 class EMPLOYEE
{
 int empcode;
 char empname[50];
 
 public:

 void getdata()
 {
	cout<<"enter employee code : ";
	cin>>empcode;
	cout<<"enter employee name : ";
	cin>>empname;
 }
 
 void display()
 {
	cout<<"\nemployee code : "<<empcode;
	cout<<"\nemployee name : "<<empname<<endl;
 }

};


 int main()
{
 EMPLOYEE e[10];
 int i;
 //cout<<"enter the no: of employee's: ";
 //cin>>n;
 for(i=0;i<6;i++)
 {
 	e[i].getdata();
 }

 for(i=0;i<6;i++)
 {
 	e[i].display();
 }
 
}
