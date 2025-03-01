#include <stdio.h>

int main(){
    int i = 0;

    while (i <= 10) //enquanto i for menor ou igual a 10, executa o código abaixo
    {
        if (i % 2 == 0) //testa se é par
        //if (i % 2 != 0) //testa se é impar
        {
            printf("O número %d é par! \n", i); //imprime o valor de i
           //printf("O número %d é impar! \n", i); //imprime o valor de i
        }
        
        i++; //incrementa 1 em i
    }
    

}