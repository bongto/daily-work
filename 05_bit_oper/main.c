#include <stdio.h>

int main()
{
    int a =67;
    int b =90;
    printf("a & b = %d\n", a & b); //AND
    printf("a ^ b = %d\n", a ^ b); //XOR 
    printf("a | b = %d\n", a | b); //OR
    printf("~a : %d\n", ~a); //NOT
    printf("~(a&b) : %d\n", ~(a&b)); //NAND
    printf("~(a|b) : %d\n", ~(a|b)); //NOR
    printf("**********************************\n\n");

    //연습문제
    //정수를 하나 입력 받아서 양수이면 음수로 출력하고, 음수이면 양수로 출력하는 프로그램 작성 
    //정수를입력 
    //정수 입력(양수 또는 음수) : 5
    //-5

    int a;
    printf("정수를 입력하세요 :");
    scanf("%d", &a);
    printf("%d\n", (~a)+1);

    printf("**********************************\n\n");

    double time = 3.76;
    int hour, min, sec;
    hour = time / 1;
    min = ((time*60)-(hour*60));
    sec = (((time*600)-(hour*600)-(min*10))*6);
    printf("%0.2lf시간은 %d시간 %d분 %d초 입니다.\n\n", time, hour, min, sec);

    return 0;
}