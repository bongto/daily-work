#include <stdio.h>
int main(void){
    int kor, eng, mat, tot;
    float avg;
    printf("국어점수를 입력하세요 : ");
    scanf("%d", &kor);            //표준 입력, 키보드로부터 입력
    printf("영어점수를 입력하세요 : ");
    scanf("%d", &eng);
    printf("수학점수를 입력하세요 : ");
    scanf("%d", &mat);   
    //계산
    tot = kor+eng+mat;
    printf("kor : %d, eng : %d, mat : %d\n", kor,eng,mat);
    printf("총점 : %d\n", tot );
    printf("평균 : %lf\n", tot/3.0 );



    return 0;
}