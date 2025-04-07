#include <stdio.h>

void main()
{
    int num = 0;
    printf("수를 입력해주세요!\n");
    scanf("%d", &num);
    
    int a = num / 100;
    int b = (num % 100) / 10;
    int c = (num % 10) / 1;

    if(num < 1000 && c != 0) {
        printf("연산결과: (%d + %d) * %d - (%d - %d) / %d = %d",
                    a, b, c, a, b, c, (a + b) * c - (a - b) / c);
    } else {
        printf("잘못된 수를 입력하셨습니다.");        
    }
}
c언어 1강 과제
