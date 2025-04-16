#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int number[6];

void swap(int *a, int *b)
{
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void quicksort(int start, int end) 
{
    if (start >= end)
    return;
    
    int key = start, i = start + 1, j = end, temp;  
    while( i <= j) {   
        while (i <= end && number[i] <= number[key]) { // i값이 끝값보다 작거나 같고배열의 i번째 값이 key번째 값보다 작거나 같을 동안 실행 
            i++;
        }
        while (j > start && number[j] >= number[key]) { // j값이 시작값보다 크거나 같고 j번째 배열값이 key번째 값보다 크거나 같을동안 실행 
            j--;
        }
        if (i > j) { // i값이 j값보다 크다면
            swap(&number[key], &number[j]); //key번째 배열과 j번째 배열을 교환하고
        } else { //아니라면
            swap(&number[i], &number[j]); //i번째 배열과 j번째 배열을 교환한다.  
        }// 피벗값을 기준으로 좌측에는 피벗보다 작은 값이 우측에는 큰값이 자리한다. 
    }
    
    quicksort(start, j - 1); //피벗값의 왼쪽부분에 대해 다시한번 함수 호출
    quicksort(j + 1, end); // 피벗값의 오른쪽 부분에 대해 다시한번 함수 호출 // 결과 적으로 가장 큰값이 우측으로 차례대로 정렬되게 된다. 
}

int main()
{
    int temp = 0;
    
    for (int i = 0; i < 6; i++) {
        srand(time(NULL));
        number[i] = (int)(rand() % 45) + 1;

        for (int j = 0; j < i; j++) {
            if (number[i] == number[j]) {
                i--;
            }
        }
        printf("%d ", number[i]);
        sleep(1);
    }

    printf("\n**********************\n");

    quicksort(0, 5);
    for (int i = 0; i < 6; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}
