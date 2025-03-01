#include <stdio.h>

int main(){
    int num;
    printf("Entre com um numero: ");
    scanf(" %d", &num);
    num = num %3;
    printf("num = %d", num);
}