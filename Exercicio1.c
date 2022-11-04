/*Nome: Bernardo Lancelot Martinez Barbosa
Turma: 3AINFO*/
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i = 0;
    int qtd;
    int aux;
    int ordenador;
//Aqui declarei as variáveis.

    printf("Digite a quantidade de números que deseja colocar em ordem: \n");
    scanf("%d",&qtd);
    int valor[qtd];
//Essas 3 linhas servem para que o usuário possa escolher quantos números ele deseeja colocar em ordem.

    printf("\nEntre com %d numeros:\n", qtd);
    
    while (i < qtd){
        printf("\n%do valor:", i+1);
        scanf("%d", &valor[i]);
        i++;
    }
//Esse 'while' serve apenas para que o usuário entre com os 5 valores que serão colocados em ordem decrescente.

    printf("\nColocando em ordem decrescente: \n");

    for (ordenador = 1; ordenador <= qtd; ordenador = ordenador + 1 ){
        for ( i = qtd-1; i > 0; i-- ){
            if ( valor[i] > valor[i-1] ){
                aux = valor[i];
                valor[i] = valor[i-1];
                valor[i-1] = aux ;
                }
        }
    }
//Esse 'for' serve para percorrer os números recebidos e ordená-los, alterando suas posições entre si de maneira decrescente.

    for ( i = 0; i < qtd; i++ )
        printf("\nval[%d]: %d\n", i+1, valor[i]);
//Esse 'for' serve apenas para exibir os números já ordenados em ordem.

    return 0;
}