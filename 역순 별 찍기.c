#include <stdio.h>

void main()
{
    int num = 0;
    scanf("%d", &num);
    
    for (int i = num; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
