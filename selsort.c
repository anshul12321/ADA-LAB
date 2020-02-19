#include<stdio.h>
#include<time.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int sel_sort(int arr[],int n)
{ 
  int min=0;
  for(int i=0;i<n-1;i++)
  {
   min=i;
   for(int j=i+1;j<n;j++)
    {
    if(arr[j]<arr[min])
     {
      min=j;
      swap(&arr[min],&arr[i]);
      }
      }
      }
    }
    
 void display(int arr[],int n)
 {
  printf("\nSorted Array:\n");
  for(int i=0;i<n;i++)
  printf(" %d",arr[i]);
  }   

void main()
{
 clock_t start_t,end_t,total_t;
 int n,a[20];
 start_t=clock();
 printf("Enter no. of elements:");
 scanf("%d",&n);
 printf("Enter Array:");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 sel_sort(a,n);
display(a,n);
end_t=clock();
total_t=end_t-start_t;
printf("\nTotal time:%ld\n",total_t);
}
    
