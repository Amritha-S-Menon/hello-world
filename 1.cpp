#include<iostream>
using namespace std;

 class bank
{
 char name[20],acctype[10];
 int accno, balance;

 public:
 
 
 
 void initial()
 {
 	cout<<"\nenter name :";
 	cin>>name;
	cout<<"\nenter account no :";
	cin>>accno;
	cout<<"\nenter account type :";
	cin>>acctype;
	cout<<"\nenter balance :";
	cin>>balance;
 }
 
 void deposit(int d)
 {
 	balance+=d;
 }
 
 void withdraw( int w)
 {
	if(balance>w)
		balance-=w;
	else
		cout<<"\nsorry, withdraeal is impossible";
 }

 void display()
 {
  	cout<<"\nname : "<<name<<endl;
	cout<<"\nbalance : "<<balance<<endl;
 }

};


int main()
{
bank b;
int d,w;
b.initial();
cout<<"\nenter the amount to be deposited ";
cin>>d;
b.deposit(d);
cout<<"\nenter the amount to be withdrawed ";
cin>>w;
b.withdraw(w);
b.display();
}
