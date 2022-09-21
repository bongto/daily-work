#include<stdio.h>

/*int main()
{
    int a=1;
    int sum=0;
    // for(int i=4; i<10; i++)  //(시작값; 조건식; 증가값)     //i를 2씩 늘리고 싶다면 i+=2, i=i+2
    // {
    //     a = a * 2;
    //     printf("i : %d\n", i);
    // }

    // printf("a : %d\n", a);

    //연습문제 
    //2개의 숫자를 입력받아 작은수부터 큰 수 까지의 합을 구하시오
    //-출력-
    //두개의 수를 입력 : a b
    //a부터 b까지의 합은 ??입니다.
    a=0;
    sum=0;
    int h, l;
    printf("두개의 수를 입력 : ");
    scanf("%d %d", &l, &h);
    if(l<h)
    {
        for(int i=l; i<(h+1); i++)
        {
            sum += i;
        }

    }
    else if(h<l)
    {
        for(int i=h; i<l+1; i++)
        {
            sum += i;
        }

    }
    printf("%d부터 %d까지의 합은 %d입니다.\n", l, h, sum);


    // a=0;
    // sum=0;
    // for(int i=100; i>0; i--)
    // {
    //     sum += i;
    // }

    // printf("100부터 1까지의 합은 %d입니다.\n", sum);
    return 0;
}*/


int main()
{
    int i,j,k;

    for(i=0; i<5; i++)
    {
         for(j=0; j<4-i; j++)
        {
            printf(" ");
        }
        for(j=0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("*****************************************\n\n");

    for(i=2; i<10; i++)
    {
        for(j=1; j<10; j++)
        {
             if((i*j) > 70)
            {
                printf("70이 넘을 때 중지\n");
                break;  //if문을 빠져나가는게 아닌 가장 가까운 for문으로 나감
            }
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }



    return 0;
}