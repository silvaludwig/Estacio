/*
Aula de loops aninhados, como o próprio nome do arquivo diz.
Nessa aula em questão, vimos o uso de while.
Particularmente não consigo visualizar ainda a necessidade. 
Parece aquele tipo de coisa que a gente aprende só pq sim mesmo.
Mas enfim... é isso.
*/
#include <stdio.h>

int main(){
    int i = 1;
    while (i<=10) //loop externo
    {
        int j = 1;//variavel local
        while (j<=10)//loop interno
        {
            printf("%d\t", i*j);
            j++;//incremento loop interno
        }
        printf("\n");
        i++;//incremento loop externo
    }
    return 0;
}