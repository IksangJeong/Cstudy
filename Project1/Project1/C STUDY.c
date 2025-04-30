//시:분:초 변환기 코드
#include <stdio.h>
int main()
{
    int total_seconds;              // 입력받은 전체 초
    int hours, minutes, seconds;    // 계산 결과: 시, 분, 초


    printf("초를 입력하세요: ");    // 사용자로부터 전체 초 입력 받기
    scanf_s("%d", &total_seconds);

    hours = total_seconds / 3600;             // 시간 계산: 전체 초를 3600으로 나눈 몫이 시간

    minutes = (total_seconds % 3600) / 60;    // 남은 초 중에서 분 계산: 3600으로 나눈 나머지를 60으로 나눈 몫

    seconds = total_seconds % 60;             // 남은 초 중에서 초 계산: 60으로 나눈 나머지


    printf("%d초는 %d시간 %d분 %d초입니다.\n", total_seconds, hours, minutes, seconds);   // 결과 출력

    return 0;

}
