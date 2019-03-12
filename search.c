#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
	int a[1000],n,i,beg,last,mid,item,ch,y=1,pos,f=0;
	FILE *fptr;
	FILE *ptr;
	clock_t t1,t2,t3,t4;
	double m=0,n1=0;
	fptr = fopen("linear.dat","a");
	ptr = fopen("binary.dat","a");
	printf("Enter the no of elements:");
	scanf("%d",&n);
	//for(i=0;i<n;i++)
	//	a[i]=i+1;
	//printf("Enter the elements:");
	//for(i=0;i<n;i++)
	//	scanf("%d",&a[i]);
	for (i = 0; i<n; i++) 
{
    a[i]=i+1;
    
}
	
	do
	{
		printf("\n1.Linear\n2.Binary\n3.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:{
					t1=clock();
					printf("Enter the element to be searched:");
					scanf("%d",&item);
					
					for(i=0;i<n;i++)
					{
						if(a[i]==item)
						{
							f=1;
							pos=i+1;
							break;
						}
					}
					if(f==1)
						printf("\nElement found at position %d",pos);
					else
						printf("\nElement not found");
					t2=clock();
						m=(double)(t2-t1)/CLOCKS_PER_SEC;
						fprintf(fptr,"%d %f\n",item,m);
						printf("\nTime taken for Linear:%f",m);
				}
				break;
			case 2:{
					t3=clock();
					beg=0,last=n-1,mid=(beg+last)/2;
					printf("Enter the element to be searched:");
					scanf("%d",&item);
					while(beg<=last)
					{
						if(a[mid]<item)
							beg=mid+1;
						else if(a[mid]==item)
						{
							printf("\nElement found at position %d",mid+1);
							break;
						}
						else
							last=mid-1;
						mid=(beg+last)/2;
					}
					t4=clock();
					n1=(double)(t4-t3)/CLOCKS_PER_SEC;
					fprintf(ptr,"%d %f\n",item,n1);
					printf("\nTime taken for Binary:%f",n1);
				}
				break;
			case 3:y=0;
				break;
			default:printf("Wrong choice");
		}
		//	m=(double)(t2-t1)/CLOCKS_PER_SEC;
		//	n1=(double)(t4-t3)/CLOCKS_PER_SEC;
		//		printf("\nTime taken for Linear:%g",m);
		//		printf("\nTime taken for Binary:%g",n1);
	}while(y==1);

	fclose(fptr);
	fclose(ptr);

    
	
}
