#include<stdio.h>
#include<time.h>
void swap(int *x,int *y) 
{ 
    int temp=*x;
    *x=*y; 
    *y=temp;
} 
  

void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j],&arr[j+1]); 
} 
  
void print(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main() 
{ 
    clock_t start_t,end_t,total_t;
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    start_t=clock();
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    print(arr, n); 
    end_t=clock();
    total_t=end_t-start_t;
    printf("Total time taken by CPU: %ld \n",total_t);
    return 0; 
} 

