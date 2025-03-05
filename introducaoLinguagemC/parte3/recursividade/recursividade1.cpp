#include <stdio.h>

void recursivo(int numero){ //cria uma função do tipo void, que quer dizer vazia e passa 'numero' como parametro
    if (numero > 0) //condicional pra execução do código. só executa as linhas abaixo se 'numero' for maior que 0
    {
        printf("%d \t", numero); //printa o numero na tela com espaçamento de tab (\t)
        recursivo(numero - 1); //"chama" a função passando 'numero - 1' como parametro
        // recursivo(numero--); // fiz um teste com decremento e não funcionou do jeito que eu imaginei kkk
    }
    
}

int main(){ //cria a função principal do programa
    int quantidade = 10; //declara a variável 'quantidade' com valor 10

    printf("Contagem regressiva: \n"); //imprime o texto Contagem regressiva
    recursivo(quantidade); //chama a função recursiva criada antes passando 'quantidade' como parâmetro

    return 0; //retorno da função
}