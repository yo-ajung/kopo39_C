#include <stdio.h>

void main()
{
    int num = 0;
    printf("숫자를 입력해주세요:");
    scanf("%d", &num);
    
    int a = num / 100; // 100의 자리 값
    int b = (num % 100) / 10; // 10의 자리 값
    int c = (num % 10) / 1; // 1의 자리 값
    int result = a + b + c;

    if (num < 1000 && num > 0) {
        if (num % 3 == 0 && num % 2 != 0) {
            printf("특별한 숫자입니다!\n");
        } else if (result % 7 == 0) {
            printf("특별한 숫자입니다!\n");
        } else if (a > c) {
            printf("특별한 숫자입니다!\n");
        } else {
            printf("특별한 숫자가 아닙니다!\n");
        }
    } else {
        printf("0이상이거나 1000 아래인 숫자를 입력해주세요!\n");
    }
}
