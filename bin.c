#include <stdio.h> 
#include<time.h>
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid;
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
  
int main() 
{ 
    clock_t start_t,end_t,total_t;
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    start_t=clock();
    int result = binarySearch(arr, 0, n - 1, x); 
    if(result == -1)
    printf("Element is not present in array"); 
   else
    printf("Element is present at index %d", result); 
    end_t=clock();
    total_t=end_t-start_t;
     printf("Total time taken by CPU: %ld \n",total_t);
    return 0; 
}
