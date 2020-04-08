#include<stdio.h> 
#include<string.h> 
  
int max (int x, int y) { return (x > y)? x : y; } 
  
int lps(char *seq, int i, int j) 
{ 
   //  If there is only 1 character 
   if (i == j) 
     return 1; 
  
   // if there are only 2 characters and both are same 
   if (seq[i] == seq[j] && i + 1 == j) 
     return 2; 
  
   // If the first and last characters match 
   if (seq[i] == seq[j]) 
      return lps (seq, i+1, j-1) + 2; 
  
   // If the first and last characters do not match 
   return max( lps(seq, i, j-1), lps(seq, i+1, j) ); 
} 
  
int main() 
{ 
    char seq[] = "BABCBAB"; 
    int n = strlen(seq); 
    printf ("The length of the LPS is %d", lps(seq, 0, n-1)); 
    getchar(); 
    return 0; 
} 

