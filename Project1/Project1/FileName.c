#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int answer, guess;
    int attempts = 0;
    unsigned char is_correct = 0; // 정답 여부 저장 (0: 아직, 1: 맞춤)

    // 난수 초기화
    srand((unsigned int)time(NULL));
    answer = rand() % 10; // 0~9 중 랜덤 숫자 선택

    printf("숫자 맞추기 게임 시작!\n");
    printf("0부터 9 사이의 숫자 중 하나를 맞춰보세요.\n");

    // 정답 맞출 때까지 반복
    while (!(is_correct & 0b00000001)) {
        printf("숫자 입력: ");
        scanf_s("%d", &guess);

        // 입력 숫자 범위 확인
        if (guess < 0 || guess > 9) {
            printf("⚠️ 0부터 9 사이 숫자만 입력하세요.\n");
            continue; // 다음 반복으로 넘어감
        }

        attempts++; // 시도 횟수 증가

        // 정답 확인
        if (guess == answer) {
            is_correct = is_correct | 0b00000001; // 정답 상태를 1로 설정
            printf("🎉 정답입니다! 총 %d번 만에 맞췄어요.\n", attempts);
        }
        else {
            printf("❌ 오답입니다. 다시 시도해보세요.\n");
        }
    }

    return 0;
}