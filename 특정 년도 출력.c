#include <stdio.h>

void main()
{
    int year[6] = {2020, 2021, 2022, 2023, 2024, 2025}; //년
    int month[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; //월
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 12; j++) {
            if (year[i] == 2023 && (month[j] == 2 || month[j] == 3 || month[j] == 4 || month[j] == 5)) {
                continue;
            }
            printf("%d년 %d월\n", year[i], month[j]);
            if (year[i] == 2025 && month[j] == 4) {
                break;
            }
        }
    }
}
