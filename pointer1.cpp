#include<iostream>
using namespace std;
class swap11
{
 	public:
 	void value(int a, int b)
 	{ 	
	int c;
 	c=a;
 	a=b;
 	b=c;
 	cout<<"\na : "<<a<<"b : "<<b<<endl;
 	}

 	void refrence(int &a,int &b)
 	{
	int c;
	c=a;
	a=b;
	b=c;
 	}

 	void address(int *a,int *b)
	{
	int c;	
	 c=*a;
	*a=*b;
	*b=c;
	cout<<"\na : "<<*a<<"b : "<<*b<<endl;
 	}
};

int main()
{
	cout<<"hihi";
	swap11 p;
	int q,a,b;

while(1)
	{
	 cout<<"enter the value of a and b :";
	 cin>>a>>b;
	 cout<<"choose 1.by value 2.by reference 3.address ";
 	 cin>>q;
	 if(q==1)
		{
		 p.value(a,b);
		
		}
	else if (q==2)
		{
		p.refrence(a,b);
		cout<<"\na : "<<a<<"b : "<<b<<endl;
		}
 	else if (q==3)
		{
		p.address(&a,&b);
		
		}
	else
		{	break;
		}


	
	}
return 0;
}



