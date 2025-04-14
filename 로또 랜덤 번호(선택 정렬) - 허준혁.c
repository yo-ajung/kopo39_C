#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define MAX_SIZE 6
#define SWAP(x, y, t) ( (t) = (x), (x) = (y), (y) = (t) )
 
int num[MAX_SIZE];
int n;
 
void selection_sort(int num[], int n)
{
   int i, j, least, temp;
   for (i = 0; i < n - 1; i++) {
      least = i;
      for (j = i + 1; j < n; j++) {
         if (num[j] < num[least]) least = j; 
      }
      SWAP(num[i], num[least], temp);
   }
}

void main()
{
   int i, j;
   n = MAX_SIZE;
   srand(time(NULL));

   for (i = 0; i < n; i++) {
        num[i] = (rand() % 45) + 1;
        for (j = 0; j < i; j++) {
            if (num[i] == num[j]) {
              i--;  
            } 
        } 
   }
   selection_sort(num, n);
   for (i = 0; i < n; i++) {
        printf("%d ", num[i]);   
   } 
}
