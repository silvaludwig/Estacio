#include <stdio.h> //inclusão da biblioteca

int main(){ //inicialização da função principal

    float notas[3] = {90.5, 80.3, 67.9}; //declaração do array e seus valores

    printf("Nota do aluno 1: %.1f\n", notas[0]); //imprime o primeiro dado do array, indice 0
    printf("Nota do aluno 2: %.1f\n", notas[1]); //imprime o segundo dado do array, indice 1
    printf("Nota do aluno 3: %.1f\n", notas[2]); //imprime o terceiro dado do array, indice 2

    return 0;
}

/*
O que eu percebi de array é que é muito parecido com as listas em python. 
Uma form de armazenar vários dados e informações dentro de uma mesma variável. 
Sendo possível, posteriormente, acessar cada um dos dados. 
Pode ser usado laços de repetição pra percorrer listas maiores. 
*/

//exemplo de uso do for pra percorrer os dados de um array:

// #include <stdio.h>
 
// int main() {
//     char *nomes[] = {"Alice", "Bob", "Carol"};
//     int i;
//     for(i = 0; i < 3; i++) {
//         printf("%s\n", nomes[i]);
//     }
//     return 0;
// }