#include <stdio.h>

int main(void){
    char name[] = "조창민";
    char address[] = "경기도 고양시 일산구";
    char phone[] = "010-1234-5678";
    int age = 40;
    double height = 183.3;

    printf("이름: %s\n", name);
    printf("나이: %d\n", age);
    printf("키 : %.1f\n", height);
    printf("주소: %s\n", address);
    printf("전화번호: %s\n", phone);
    printf("곱셈: %.3f", 13.45 * 24.2);
    return 0;
}