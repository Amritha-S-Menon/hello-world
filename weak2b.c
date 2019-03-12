#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main()
{
int a[100],i,j,n,temp;
clock_t t1,t2,t3,t4;
double m;
printf("\n the array to be sorted :");
n=10;

printf("\n1.RANDOM\n");

for (i = 0; i<n; i++) 
{
    a[i] = rand() % 10 + 1;
    printf("%d\t",a[i]);
}


t1=clock();
//selection sort


 for (i = 0; i < n-1; i++) 
{ 
     min = i; 
     for (j = i+1; j < n; j++) 
     {     
	if (a[j] < arr[min]) 
            min = j; 
     }  
	
    if(min!=i)
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
}
printf("\n\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("\ntime complexity for random no: is %f",m); 


//2nd
printf("\n\n1.ASSENDING\n");
for (i = 0; i<n; i++) 
{
    a[i] =i+1;
    printf("%d\t",a[i]);
}


t1=clock();
//selection sort

 for (i = 0; i < n-1; i++) 
{ 
     min = i; 
     for (j = i+1; j < n; j++) 
     {     
	if (a[j] < arr[min]) 
            min = j; 
     }  
	
    if(min!=i)
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
}
printf("\n\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("\ntime complexity for random no: is %f",m); 



//3rd
printf("\n\n1.DESCENDING\n");
for (i = 0; i<n; i++) 
{
    a[i] =n-i;
    printf("%d\t",a[i]);
}


t1=clock();
//selection sort


 for (i = 0; i < n-1; i++) 
{ 
     min = i; 
     for (j = i+1; j < n; j++) 
     {     
	if (a[j] < arr[min]) 
            min = j; 
     }  
	
    if(min!=i)
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
}
printf("\n\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("\ntime complexity for random no: is %f",m); 

}

 
