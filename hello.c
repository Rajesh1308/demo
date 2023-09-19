#include<stdio.h>

void feature(){
    printf("\nHello world in feature branch");
}

int main(){
    printf("Hello world");
    int a = 10;
    int b = 30;
    
    printf("\n%d", a + b);
    printf("\n%d", a - b);
    printf("\n%d", a * b);
    printf("\n%d", a / b);
    printf("\n%d", a % b);

    feature();
    return 0;
}