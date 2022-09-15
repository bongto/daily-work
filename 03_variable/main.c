#include <stdio.h>
#include <string.h>                 //문자열 관련 헤더파일

int main(void){
    int sum=10+20;
    printf("%d + %d = %d\n", 10,20,sum);
    printf("%d와 %d의 합은 %d입니다.\n", 10,20,sum);

    printf("*************************************************\n\n");
    
    int a=10,b=20,c=a+b;                //정수를 저장할 변수
    double da =10.0;                   //실수를 저장할 변수
    char ch = 'A';                     //문자를 저장할 변수
    char str[5] = "ABCD";              //문자열을 저장할 변수, 문자 배열
    // a : 10, b : 20, c : 30
    printf("a : %d, b : %d, c : %d\n",a,b,c); 
    //da : 10.0, ch : , str : ABCD
    printf("da : %.1lf, ch : %c, str : %s\n", da,ch,str);

    a=100;
    b=a;        //lvalue는 무조건 변수여야 한다. rvalue는 변수와 상수 모두 가능
    printf("a : %d, b : %d, c : %d\n",a,b,c); 
    
    printf("*************************************************\n\n");
    // char형 변수의 사용 정수형 상수 4byte, 실수는 8byte, 문자의 변수는 1byte
    char ch1 = 'A';             //4byte
    char ch2 = 65;              //1byte

    printf("ch1 : %d, ch2 : %d\n", ch1, ch2);
    printf("ch1 : %c, ch2 : %c\n", ch1, ch2);
    
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long  lln = 123451234512345;

    printf("short형 변수 출력 \t: %d \t\tsize : %lu\n", sh,sizeof(short));
    printf("int형 변수 출력 \t: %d \t\tsize : %lu\n", in,sizeof(int));
    printf("long형 변수 출력 \t: %ld \t\tsize : %lu\n", ln,sizeof(long));
    printf("long long형 변수 출력 \t: %lld \tsize : %lu\n", lln,sizeof(long long));
    
    float ft = 1.23456789123456789123456789;
    double db = 1.23456789123456789123456789;
    long double ldb = 1.23456789123456789123456789;

    printf("float형 변수의 값\t: %.20lf\n", ft);
    printf("double형 변수의 값\t: %.20lf\n", db);
    printf("long double형 변수의 값\t: %.20Lf\n", ldb);

    printf("*************************************************\n\n");
    char fruit[11] = "strawberry";         //문자열의 크기는 +1을 해준다.
    printf("딸기 : %s\n", fruit);

    //fruit = "banana";                 //문자열은 대입연산자를 사용할 수 없다

    //문자열 복사, strcpy()함수를 사용
    strcpy(fruit, "banana");
    printf("%s\n", fruit);

    printf("*************************************************\n\n");
    const int num = 10;

    //num = 100;                //const로 값을 고정시켰기때문에 값을 바꾸지 못함

    printf("%d\n", num);

    printf("*************************************************\n\n");
    //72p 3번문제
    const int kor=72, eng=85, mat=90;
    int tot;
    double avg;

    tot = kor+eng+mat;
    avg = tot/3.0;                  //3.0으로 나누어 소숫점까지 출력
    printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor,eng,mat);
    printf("총점 : %d\n",tot);
    printf("총점 : %lf\n",avg);

    return 0;
}