#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define MAX_SIZE 6
#define SWAP(x, y, t) ( (t) = (x), (x) = (y), (y) = (t) )
 
int num[MAX_SIZE];
int n;
 
void bubble_sort(int num[], int n)
{
   int i, j, temp;
   
   for (i = n - 1; i > 0; i--) {
      for (j = 0; j < i ; j++) {
            if (num[j] > num[j + 1]) {
                SWAP(num[j], num[j + 1], temp);
            } 
        }
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
   
   bubble_sort(num, n);
   for (i = 0; i < n; i++) {
        printf("%d ", num[i]);   
   }
}
