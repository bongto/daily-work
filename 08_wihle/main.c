#include<stdio.h>
#include<stdbool.h> //tur를 사용하기 위한 헤더파일 

int main()
{
    int a = 0;
    int sum=0;
    while(sum<1000) //조건식이 '참'인경우 반복문 내용 실행 
    {
        a++;        //합을 구하는것보다는 a에1을 더하는게 중요
        sum += a;
    }
    printf("a : %d\n", a);
    printf("sum : %d\n", sum);

    //1부터 100까지 7의 배수의 합을 구하시요 
    a=0;
    sum=0;
    while(a<=100)
    {
        if((sum%7)==0)
        {
            sum += a;
        }
        a++;
    }
    printf("1부터 100까지 7의 배수의 합은 %d입니다.\n", sum);


    printf("*****************************************\n\n");

    //do ~ while : 반복문을 무조건 1번은 실행 //scanf로 한번 입력 받을 때 
    a=1000;

        do{
            a*=2;
        }while (a<10);
        {
    }
    
    printf("a : %d\n", a);

    //문자를 하나 입력받아서 숫자가 아니면 다시 입력을 받는 프로그램을 작성.
    char ch;

    while(1)
    {
        printf("문자 : ");
        scanf("%c", &ch);
        if((ch>'0')&&(ch<'9'))
        {
            break;
        }
    }

    do
    {
        printf("문자 : ");
        scanf(" %c", &ch);
    } while (!((ch>'0')&&(ch<'9')));

    return 0;
}