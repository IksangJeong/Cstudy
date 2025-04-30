#include <stdio.h> 

int main() {
    float height, weight, bmi;  // 실수형 변수 선언

    // 사용자 입력 받기
    printf("키(cm)를 입력하세요: ");
    scanf_s("%f", &height);  // 키 입력받기

    printf("몸무게(kg)를 입력하세요: ");
    scanf_s("%f", &weight);  // 몸무게 입력받기

    printf("\n");

    // BMI 계산: 체중(kg) / (키(m)^2)
    bmi = weight / ((height / 100) * (height / 100));

    // BMI 출력
    printf("당신의 BMI는 %.2f 입니다.\n", bmi); //소수점 자리 지정

    // if 조건문을 아직 배우지 않아 조건 연산자(?:)를 중첩하여 조건문 없이 판정 출력 
    // 논리, 관계 연산자를 이용해서 각 구간을 비교함
    printf("%s\n",
        (bmi < 18.5) ? "저체중입니다." :
        (bmi < 23.0) ? "정상 체중입니다." :
        (bmi < 25.0) ? "과체중입니다." :
        "비만입니다.");

    return 0;  // 프로그램 정상 종료
}
