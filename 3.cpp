#include<iostream>
using namespace std;

 class EMPLOYEE
{
 int empno;
 float basic,da,it,grosal,netsal; 
 char name;

 public:
 
 void read()
 {
	cout<<"enter employee name : ";
	cin>>name;
	cout<<"enter employee number : ";
	cin>>empno;
	cout<<"enter employee basic salary : ";
	cin>>basic;
 }

 void compute()
 {
	da=basic*(55/100);
	grosal=(basic+da)*12;
	it=grosal*(30/100);
	netsal=grosal-it;
	cout<<"\nnet salary is : "<<netsal<<endl<<endl;
 }

};

 int main()
{
  EMPLOYEE e[10];
 int i,n;
 cout<<"enter the no: of employee's: ";
 cin>>n;
 for(i=0;i<n;i++)
 {
 	e[i].read();
	e[i].compute();
 }

}
 
	
	
