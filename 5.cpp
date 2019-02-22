#include<iostream>
#include<string.h>
using namespace std;

 class shopping
{

 char it_name[50];
 
 public:
 int code;
 int price;
 int static count;
 void read()
 {
	 cout<<"name :";
	 cin>>it_name;
	 cout<<"code :";
	 cin>>code;
	 cout<<"price :";
	 cin>>price;
 }

 void display()
 {
	 cout<<"\nname :"<<it_name;
	 cout<<"\tcode :"<<code;
	 cout<<"\tprice :"<<price;
	 count+=price;
 }
 
 /*int check(int c)
 {
 	if(c==code)
	return 1;
	else
 	return 0;

 }*/

 void change(shopping itm )
{ 
code=itm.code;
strcpy(it_name,itm.it_name);
price=itm.price;
}

/*void addtotal()
{
count+=price;
}

void total()
{
cout<< count;
}*/

};
 
int shopping ::count=0;

int main()
{
 int n,i,k,c,a,j,sum=0;
 shopping item[10];
 cout<<"\nenter the no: of items in the list :";
 cin>>n; 
 for(i=0;i<n;i++)
 	item[i].read();
 
 cout<<"\ndo you want to add elements to the list (yes:1 / no:0)";
 cin>>k;

 if(k==1)
 {
	 n++;
	 item[i].read();
 }
for(i=0;i<n;i++)
 		item[i].display();

 cout<<"\ndo you want to delete elements to the list (yes:1 / no:0)";
 cin>>k;

 if(k==1)
 {
	cout<<"enter the code of the item to be deleted :";
	cin>>c;
	for(i=0;i<n;i++)
	{
		if(item[i].code==c)
		{
		for(j=i;j<n;j++)
			{
			item[j].change(item[j+1]);
			item[j].display();
			}
		break;
		}	
	item[i].display();
 	}
	
 }


for(i=0;i<n;i++)
{
sum+=item[i].price;
}
cout<<"total price : "<<sum;

}

	
