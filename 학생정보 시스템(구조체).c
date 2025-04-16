#include <stdio.h>
#include <stdlib.h>

struct student {
    char *name;
    int age;
    char *gender;
    char *hobby;
};

int list(int start, int max)
{    
    struct student a[3] = {
        {"1. hong", 30, "M", "soccer"},
        {"2. kim", 25, "M", "music"},
        {"3. park", 20, "F", "movie"}
    };

    for (int i = 0; i < 3; i++) {
        printf("%s/%d/%s/%s\n\n", a[i].name, a[i].age, a[i].gender, a[i].hobby);
    }

    struct student students[1000];

    for (int j = 0; j < 1000; j++) {
        students[j].name = (char*)malloc(sizeof(char) * 40);
        students[j].gender = (char*)malloc(sizeof(char) * 40);
        students[j].hobby = (char*)malloc(sizeof(char) * 100);

        while (1) {
            printf("성을 입력하세요 : ");
            scanf("%s", students[j].name);
            printf("나이를 입력하세요 : ");
            scanf("%d", &students[j].age);
            if (students[j].age >= 140 || students[j].age < 0) {
                printf("살아있을까요? 다시 입력하세요.\n\n");
                continue;
            }
            printf("성별을 입력하세요 (M/F) : ");
            scanf("%s", students[j].gender);
            if ((students[j].gender[0] != 'F' && students[j].gender[0] != 'M') || students[j].gender[1] != '\0') {
                printf("성별이 이상합니다. 다시 입력하세요.\n\n");
                continue;
            }
            printf("취미를 입력하세요 : ");
            scanf("%s", students[j].hobby);
            break;
        }

        for (int i = 0; i < 3; i++) {
            printf("%s/%d/%s/%s\n", a[i].name, a[i].age, a[i].gender, a[i].hobby);
        }

        for (int k = 0; k < j; k++) {
            printf("%d. %s/%d/%s/%s\n", k + 4, students[k].name, students[k].age, students[k].gender, students[k].hobby);
        }

        printf("%d. %s/%d/%s/%s\n", j + 4, students[j].name, students[j].age, students[j].gender, students[j].hobby);
        
        free(students[j].name);
        free(students[j].gender);
        free(students[j].hobby);
    }
    return 0;
}

int main()
{
    list(4, 100);
    return 0;
}
