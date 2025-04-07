#include <stdio.h>

void main()
{
    int num;
    printf("숫자를 입력하시오:");
    scanf("%d", &num);
    
    switch(num) {
        case 0:
            printf("A");
            break;
        case 1:
            printf("B");
            break;
        case 2:
            printf("C");
            break;
        case 3:
            printf("D");
            break;
        case 4:
            printf("E");
            break;
        case 5:
            printf("F");
            break;
        case 6:
            printf("G");
            break;
        case 7:
            printf("H");
            break;
        case 8:
            printf("I");
            break;
        case 9:
            printf("J");
            break;
        default:
            printf("잘못된 입력입니다!");
            break;
    }
}
