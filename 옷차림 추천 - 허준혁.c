#include <stdio.h>

void main()
{
    float num;
    
    printf("온도를 입력해주세요.");
    scanf("%f", &num);
    
    if (num <= 30) {
        switch ((int)num) {
            case 30:
            case 29:
            case 28:
            case 27:
            case 26:
            case 25:
                printf("따뜻한 날씨입니다! 가벼운 옷을 입으세요.");
                break;
            case 24:
            case 23:
            case 22:
            case 21:
            case 20:
            case 19:
            case 18:
            case 17:
            case 16:
                printf("신선한 날씨입니다! 가벼운 겉옷을 챙기세요.");
                break;
            case 15:
            case 14:
            case 13:
            case 12:
            case 11:
            case 10:
            case 9:
            case 8:
            case 7:
            case 6:
                printf("조금 쌀쌀합니다! 따뜻한 옷을 입으세요.");
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("매우 춥습니다! 두꺼운 외투를 꼭 입으세요.");
                break;
            default:
                printf("한파 경고! 패딩과 장갑, 모자를 착용하세요.");    
                break;
        }
    } else {
        printf("너무 더워요! 반팔과 반바지를 입으세요!");
    }
}
