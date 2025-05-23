#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 6

// 삽입정렬
// 삽입정렬은 인덱스 1번부터 차례대로 자기 앞에 있는 숫자들과 비교해서
// 자신한테 맞는 자리에 찾아 들어감 

int num[MAX_SIZE];
int n;

void insertion_sort(int num[], int n) {
    int i, j, temp;
    
    for (i = 1; i < n; i++) {
        temp = num[i];
        for (j = i - 1; j >= 0 && num[j] > temp; j--) {
            num[j + 1] = num[j];
        }
        num[j + 1] = temp;
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
    
    insertion_sort(num, n);
    for (i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
}
