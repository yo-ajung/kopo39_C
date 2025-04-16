#include <stdio.h>
#include <time.h>

enum month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
enum day { sun = 1, mon, tue, wed, thu, fri, sat };

int getDays(int y, enum month m) {
    if (m == feb) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            return 29;
        else
            return 28;
    }
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return days[m - 1];
}

enum day getStartWeekday(int y, enum month m) {
    struct tm date = {0}; // tm 구조체 초기화
    date.tm_year = y - 1900; // 연도를 tm_year에 맞게 설정 (1900년을 빼야 함)
    date.tm_mon = m - 1; // 월을 tm에 맞게 설정 (0부터 시작하므로 1을 빼야 함)
    date.tm_mday = 1; // 1일로 설정
    mktime(&date); // tm 구조체에 맞게 시간을 설정
    return date.tm_wday; // 1일의 요일 반환 (0: 일요일, 1: 월요일, ..., 6: 토요일)
}

void printDday(int targetYear, int targetMonth, int targetDay) {
    time_t now = time(NULL);  // 현재 시간을 초 단위로 가져옴
    struct tm target = {0}; // tm 구조체 초기화
    target.tm_year = targetYear - 1900; // 연도 설정(그레고리력)
    target.tm_mon = targetMonth - 1; // 월 설정 (0부터 시작)
    target.tm_mday = targetDay; // 날짜 설정

    double diff = difftime(mktime(&target), now) / (60 * 60 * 24); // 일 수로 변환
    printf("\nD-day: %.0f일\n", diff); // D-day 출력
}

void printCalendar(int y, enum month m) {
    enum day start = getStartWeekday(y, m);
    int days = getDays(y, m);

    printf("\n%d%02d\n", y, m);
    printf(" s  m  t  w  t  f  s\n");

    for (int i = 0; i < start; i++) {
        printf("   ");
    }

    for (int d = 1; d <= days; d++) {
        printf("%2d ", d);
        if ((start + d) % 7 == 0) printf("\n");
    }
    printf("\n");
}

int main() {
    int y, m;
    printf("연도 입력: ");
    scanf("%d", &y);
    printf("월 입력: ");
    scanf("%d", &m);
    printCalendar(y, (enum month)m);
    
    int targetYear, targetMonth, targetDay;
    printf("D-day 날짜 입력 (연(enter), 월(enter), 일(enter)): ");
    scanf("%d %d %d", &targetYear, &targetMonth, &targetDay);
    printDday(targetYear, targetMonth, targetDay);

    return 0;
}
