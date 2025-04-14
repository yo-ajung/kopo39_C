#include <stdio.h>

void main()
{
   int num;
   printf("원하는 수를 입력하세요.\n");
   scanf("%d", &num);
   
   int i = 0;
   while (i < num) {
       i = i + 1;
       printf("%d ", i);
   }
}
