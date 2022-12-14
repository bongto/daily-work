#include <stdio.h>

int main(void){
    
    printf("%d\n", 12);             //10진수
    printf("%d\n", 014);            //8진수
    printf("%d\n", 0x0C);           //16진수
    printf("%d\n", 0b1010);         //2진수


    printf("*********************************************\n\n");
    printf("%d\n", 12);               //10진수
    printf("%o\n", 12);               //8진수
    printf("%x\n", 12);               //16진수 (소문자 출력)
    printf("%X\n", 12);               //16진수 (대문자 출력)
    //printf("%b", 12);               //2진수 표현은 없다

    printf("*********************************************\n\n");

    // 10진수 12는 10진수로 12라고 표현합니다
    // 10진수 12는 8진수로 014라고 표현합니다
    // 10진수 12는 16진수로 0xC라고 표현합니다
    printf("10진수 %d는 10진수로 %d라고 표현합니다\n", 12, 12);
    printf("10진수 %d는 8진수로 0%o라고 표현합니다\n", 12, 12);
    printf("10진수 %d는 16진수로 0x%X라고 표현합니다\n", 12, 12);
    
    // 실수 상수 표현법
    printf("%.1lf\n", 1e6);
    printf("%.1lf\n", 1e+6);
    printf("%.2le\n", 0.0000314);

    // 문자(char), 문자열(string)
    // 문자열과 문자의 차이점
    
    printf("%c\n", 'A');                 //문자, 작은따음표, 문자의 크기는 4byte
    printf("%s\n", "A");                 //문자열, 큰따음표, '\0'(null)
    printf("%s\n", "가");                //한글은 문자열로 표현해야함

    return 0;
}