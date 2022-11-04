/*Nome: Bernardo Lancelot Martinez Barbosaa
Turma: 3AINFO*/

#include <ctype.h>
/* Nome: Bernardo Lancelot Martinez Barbosa
Turma: 3AINFO*/

#include <math.h>
#include <stdio.h>
//Aqui inclui a biblioteca para poder utilizar a função "floor"

int main()
{
    int decimal, i, j;
    int binario[100];
//Aqui declarei as variáveis.
    
    printf("Digite um número inteiro: ");
    scanf("%d", &decimal);
//As duas linhas acima apenas servem para pedir que o usuário digite um número.
    
    for(i = 0; decimal != 0; i++){
        binario[i] = decimal %2;
        decimal = floor(decimal/2);
    }
/*Esse for serve para fazer o processo de conversão da base decimal para a binária, dividindo por dois até não haver mais um número inteiro
(por isso usei o floor).*/ 
    
    printf("Esse número convertido para binário fica: ");
    for(j = i - 1; j > -1; j--){
        printf("%d", binario[j]);
    }
//Esse 'for' serve apenas para que seja exibido o vetor do número binário para o usuário.

    return 0;
}