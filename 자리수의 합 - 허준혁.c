#include <stdio.h>

void main()
{
    int num = 0;
    scanf("%d", &num);
    
    int a = num / 100;
    int b = (num % 100) / 10;
    int c = (num % 10) / 1;

    if (num >= 1000) {
        printf("1000이상은 입력할 수 없습니다.");
    } else {
        printf("자리 수의 합: %d", a + b + c);    
    }
}
