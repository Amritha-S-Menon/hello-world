#include<iostream>
using namespace std;
 class employee
{
 public:
 int id,age,bpay,exp;
 char name[10],desig[10]; 


	void read()
	{
	cout<<"\nenter the id :";
	cin>>id;
	cout<<"\nenter the name :";
	cin>>name;
	cout<<"\nenter the age :";
	cin>>age;
	cout<<"\nenter the designation :";
	cin>>desig;
	cout<<"\nenter the basic pay :";
	cin>>bpay;
	cout<<"\nenter the experience :";
	cin>>exp;
	
	}
	
};

class other_income : public virtual employee
{

 public:
 int  income;
 char source;

	void accept()
	{
	cout<<"\nenter the amount :";
	cin>>income;
	cout<<"\nenter the source :";
	cin>>source;
	}
	void display()
	{
	cout<<"\nenter the income : "<< income;
	cout<<"\nenter the source : "<< source;
	}
};

class increement :public virtual employee
{

public:

int incree;
	void calculate_incree()
	{
	if(exp>25)
		incree=5000;
	else 
		incree=2000;
	cout<<"\n increement :"<<incree;
	}
};
 
class net_salary: public other_income ,public increement
{
int total_sal;
public:
	 void salray()
	{
		total_sal=bpay+income+incree;
		cout<<"\ntotal salary : "<<total_sal;
	}
	
	
};
 

int main()
{
net_salary q;
int c=1;
while(c)
{
q.read();
q.accept();
q.calculate_incree();
q.salray();
cout<<"\nadd more employee :";
cin>>c;
}

}

	
