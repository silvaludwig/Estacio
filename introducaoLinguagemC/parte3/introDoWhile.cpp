#include <stdio.h>

int main(){
    int i = 1; //variável de incremento

    do //instrução para fazer algo...
    {
        printf("%d\n", i); //código pra imprimir o valor de i
        i++;
    } while (i <= 5); //...enquanto essa condição não for falsa
    
    return 0;
}

//o código acima deve imprimir de 1 a 5