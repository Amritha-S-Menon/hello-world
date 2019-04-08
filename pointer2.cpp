#include<iostream>
using namespace std;
 class numbers
{
 int a[10];
 public:

 void find_max(int a[],int n)
 {
	int max,i;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	cout<<"\nmaximum : \n"<<max;

 }

 void find_min(int a[],int n)
 {
	int min,i;
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<"\nminimum : \n"<<min;

 }	
 
 };

int main()
{
	numbers *s=new numbers;
	int n,c, i,a[10];
	cout<<"\nenter the size :";
	cin>>n;
	cout<<"\nenter the array :";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	while(1)
	{
	cout<<"\nchoose 1.maximum 2.minimum \n";
	cin>>c;

	if(c==1)
	s->find_max(a,n);
	else if(c==2)
	s->find_min(a,n);
	else
	break;
	}
}

