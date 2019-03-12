#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void func(int n)
{

FILE *fptr; 
fptr = fopen("insert.dat","a");
int a[1000],i,j,temp,key;
clock_t t1,t2,t3,t4;
double m;
printf("\n the array to be sorted :");


printf("\n1.RANDOM\n");

for (i = 0; i<n; i++) 
{
    a[i] = rand() % n+ 1;
    
}


t1=clock();

//insertion sort

  for (i = 1; i < n; i++) 
   { 
       key = a[i]; 
       j = i-1; 
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && a[j] > key) 
       { 
           a[j+1] = a[j]; 
           j = j-1; 
       } 
       a[j+1] = key; 
   } 

/*FILE *mix; 
mix = fopen("mixed.dat","a"); 
fprintf(mix,"%d :",n);
 fprintf(mix,"%f\n",m);
 fclose(mix);
*/


t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;
 fprintf(fptr,"%d ",n);
 fprintf(fptr,"%f\n",m);
 fclose(fptr);
printf("time complexity for random no: is %f",m);


//2nd

printf("\n2.ASCENDING\n");

for (i = 0; i<n; i++) 
{
    a[i] =i+1;

}


t1=clock();

//insertion sort

  for (i = 1; i < n; i++) 
   { 
       key = a[i]; 
       j = i-1; 
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && a[j] > key) 
       { 
           a[j+1] = a[j]; 
           j = j-1; 
       } 
       a[j+1] = key; 
   } 


t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("time complexity for random no: is %f",m);





//3rd
printf("\n3.DESCENDING\n");

for (i = 0; i<n; i++) 
{
    a[i] = n-i;
  
}


t1=clock();

//insertion sort

  for (i = 1; i < n; i++) 
   { 
       key = a[i]; 
       j = i-1; 
  
       while (j >= 0 && a[j] > key) 
       { 
           a[j+1] = a[j]; 
           j = j-1; 
       } 
       a[j+1] = key; 
   } 

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("\ntime complexity for random no: is %f",m);
}

void main()
{
func(100);
func(200);
func(300);
func(500);


}


