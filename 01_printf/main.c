#include <stdio.h> //표준 입출력 함수

int main(void){
    printf("Be Happy!\n"); //모니터에 출력(표준출력)
    printf("My friend\r\n");
    printf("My friend\r\n");
    printf("test\r"); //캐리지 리턴, 맨 앞으로 이동(앞쪽의 내용을 삭제)

    printf("*************************************************\n\n");

    //10+20=30
    printf("%d+%d=%d\n", 10,20,30);
    // printf("%d+%d=%d\n", 10,20,30);
    printf("%d와 %d의 합은 %d입니다.\n", 10,20,30);
    // 실수는 기본형을 double형으로 잡는다. (double형은 8byte, float는 4byte)
    // 10.5+20.7=31.2
    printf("%lf+%lf=%lf\n",10.5,20.7,31.2);         //기본은 소숫점 6자리까지 표현
    // .20lf는 소숫점 20자리까지 표현
    printf("%.1lf+%.1lf=%.1lf\n",10.5,20.7,31.2);   //.1lf는 소숫점 1자리까지 표현
    // 5.3lf는 전체 자릿수를 5에 맞추고 소숫점 밑으로는 3번째 자리까지 표현
    // 표현할 값은 변경되지 않게 자동 조절
    printf("%5.2lf+%5.3lf=%5lf\n",10.5,20.7,31.2);  //전체 자릿수 맞추기

    printf("*************************************************\n\n");
    //p35 2번문제
    printf("%d를 %d로 나누면 %lf입니다.\n", 1,2,0.5);
    //p35 3번문제
    /*
    printf("Hello world!\n");
    */
    printf("Be\rHappy!\nBaby\n");
    return 0;
}