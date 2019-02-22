#include<iostream>
using namespace std;

 class student
{
 int usn,m1,m2,m3;
 float average;
 char name[20];

 public:
 
 void input()
 {
	cout<<"enter name :";
 	cin>>name;
	cout<<"enter usn :";
	cin>>usn; 
	cout<<"enter mark of 1st subject :";
 	cin>>m1;
	cout<<"enter mark of 2nd subject :";
 	cin>>m2;
	cout<<"enter mark of 3rd subject :";
 	cin>>m3;
 }

 void marks()
 {
	if (m1>m2 && m2>m3)
		average=(m1+m2)/2;
	else if (m1>m2 && m3>m2)
		average=(m1+m3)/2;
	else
		average=(m2+m3)/2;
 	
 }
 
 void display()
 {
	cout<<"\nname : "<<name;
	cout<<"\nusn : "<<usn;
	cout<<"\nmark1 : "<<m1;
	cout<<"\tmark2 : "<<m2;
	cout<<"\tmark3 : "<<m3;
	cout<<"\naverage of the best 2 marks is : "<<average<<endl;
	
 }	

};

 int main()
{
 student s[10];
 int i;
 for(i=0;i<3;i++)
 {
 	s[i].input();
 	s[i].marks();
 }
 for(i=0;i<3;i++)
 {
	s[i].display();
 }

}
