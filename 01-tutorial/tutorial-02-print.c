#include <stdio.h>

int main(void){
    float a = 3.14f;
    for(int i=1;i<=10;i++){
        printf("%.2f x %2d = %5.2f\n", a, i, a*(float)i);
    }
}