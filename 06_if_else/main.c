#include<stdio.h>

/*int main(void)
{
    // int a = 20, b = 0;

    // if(a>10)       //조건식->참 또는 거짓
    //     b = a;    //조건식이 참이면 실행
    
    // printf("a : %d, b : %d\n",a ,b);

    // if(a > b)
    //     a=b=0;

    // printf("a : %d, b : %d\n",a ,b);

    // printf("****************************************\n\n");

    // 연습문제 
    // 출력화면 
    // 두개의 수를 입력하세하시오. 10 20 
    // 10과 20중에 큰 수는 20입니다.
    // int a,b;
    // scanf("%d %d", &a, &b);
    // if(a>b)
    //     printf("%d와 %d중에 큰 수는 %d입니다.\n", a ,b ,a);   //조건식이 참일 경우에 실행 
    // else if(a == b)
    //     printf("%d와 %d는 같습니다.\n", a ,b);               //조건식이 참일 경우에 실행
    // else
    //     printf("%d와 %d중에 큰 수는 %d입니다.\n", a ,b ,b);  //조건식이 거짓일 경우에 실행
    
    // printf("****************************************\n\n");
    // int a,b;
    // a=0,b=0;
    // if(a>0)
    // {
    //     b=1;
    // }
    // else if(a==b)
    // {
    //     b=2;
    // }
    // else
    // {
    //     b=3;
    // }
    // printf("a : %d, b : %d", a, b);
    
    //연습문제 
    //점수를 입력받아 학점을 출력하는 프로그램을 작성 
    //-100~90 : A학점
    // -89~80 : B학점
    // -79~70 : C학점
    // -69~60 : D학점 
    // -59~0  : F학점
    //-출력-
    //점수입력 : 89
    //학점은 B학점입니다.

    int a;
    printf("점수를 입력하세요 : ");
    scanf(" %d", &a);
    if(a>=90)
    {
        printf("학점은 A학점입니다.\n");
    }
    else if(a>=80)
    {
        printf("학점은 B학점입니다.\n");
    }
     else if(a>=70)
    {
        printf("학점은 C학점입니다.\n");
    }
     else if(a>=60)
    {
        printf("학점은 D학점입니다.\n");
    }
     else
    {
        printf("학점은 F학점입니다.\n");
    }

    //연습문제
    //알파벳을 하나 입력받아 대문자인지 소문자인지를 구분
    //-출력-
    //알파벳을 입력하세요 : a
    //소문자 입니다.

    char aa;    //'\n', 0    //입력을 문자로 받아야 하기 때문에 int가 아니라 char로 해줌 
    printf("문자을 입력하세요 : ");
    scanf(" %c", &aa);  //문자는 %c
    if((aa>=65)&&(aa<=122))
    {
        printf("알파뱃입니다.\n");
        if(97<=aa&&aa<=122)  
        {
            printf("알파뱃인데 소문자 입니다\n");
        }
        else if(65<=aa&&aa<90)  
        {
            printf("알파뱃인데 대문자 입니다\n");
        }
    }
    else if(0x30<=aa&&aa<=0x39) 
    {
        printf("숫자 입니다\n");
    }


    return 0;

    
}*/