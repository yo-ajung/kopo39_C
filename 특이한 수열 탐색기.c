#include <stdio.h>

void main()
{
    int M; //시작숫자
    int N; //마지막 숫자
    
    int a;
    int b;
    int c;
    
    printf("원하는 숫자를 입력하세요\n");
    scanf("%d", &M);
    scanf("%d", &N);
    
    if (M > 1000 || N > 1000) {
        printf("1000이상은 입력하실 수 없습니다.");
    } else if (M > N) { 
        printf("시작 숫자를 더 작게 입력해주십시오.");
    } else {
        for (int i = M; i <= N; i++) {
            a = i / 100;
            b = (i % 100) / 10;
            c = (i % 10) / 1;
            if (i % 7 == 0 || a == 7 || b == 7 || c == 7) {
                continue;
            }
            printf("%d\n", i);
            
            if (i % 5 == 0) {
                break;
            }
        }          
    }
}
