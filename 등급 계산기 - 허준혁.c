#include <stdio.h>

void main()
{
   float num;
   
   printf("점수 입력:");
   scanf("%f", &num);
   
   if ((int)num <= 100 && (int)num > 0) {
       switch ((int)num / 10) {
            case 10:
            case 9:
                printf("A등급\n");
                break;
            case 8:
                printf("B등급\n");
                break;
            case 7:
                printf("C등급\n");
                break;
            case 6:
                printf("D등급\n");
                break;
            default:
                printf("F등급\n");
                break;
       }
   } else {
       printf("잘못된 수 입력\n");
   }
   
   switch ((int)num / 10) {
        case 9:
            printf("10%% 추가 보너스\n");
            num = num + (num * 0.1);
            printf("최종 점수: %f\n", num);
            break;
        case 8:
            printf("5%% 추가 보너스\n");
            num = num + (num * 0.05);
            printf("최종 점수: %f\n", num);
            break;
        default:
            printf("추가 보너스 없습니다.\n");
            break;
   }
}
