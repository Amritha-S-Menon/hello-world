#include<stdio.h>
#include<time.h>

void main()
{
int a[10],n,i,b,j,e,q=0,pos;
double m;
clock_t t1,t2;
printf("enter the limit :");
scanf("%d",&n);
printf("enter the elements :\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
t1=clock();
printf("enter the possition to be deleted :");
scanf("%d",&pos);
pos--;
e=a[pos];
for(i=0;i<n;i++)		//remove(i)
{
	if(pos==i)
	{
	for(j=i;j<n;j++)
		{a[j]=a[j+1];}
	break;
	}
}
for(b=0;b<n-1;b++)
{
printf("%d\t",a[b]);
}

n--;
for(j=i;j<n;j++)  //next(i)
{
	if(a[j]>e)
	{
	printf("\nthe next largest element is : %d",a[j]);
	q=1;
	break;
	}
}

if(q==0)
printf("\nthere is no such next larger element in the array");

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;
printf("\nthe time taken is %f",m);

}
