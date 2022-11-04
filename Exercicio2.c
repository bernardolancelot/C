/*Nome: Bernardo Lancelot Martinez Barbosaa
Turma: 3AINFO*/

#include <ctype.h>
#include <math.h>
#include <string.h>
//Inclui a biblioteca 'ctype' pra poder utilizar a função toupper, a 'string' para utilizar a função strlen e a 'math' para utilizar a função pow

int main()
{
    int decimal;
    int i, temp, tamanho_string;
    char hexadecimal[100];
//Nas 3 linhas acima declarei as variáveis.

    printf("Digite um número hexadecimal: ");
    scanf("%s", hexadecimal);
//Nessas 2 linhas o programa pede e escaneia o valor hexadecimal digitado pelo usuário

    tamanho_string = strlen(hexadecimal);
    tamanho_string--;
//Aqui utilizei essa função para percorrer a string até o caractere anterior ao último, se tiverem 6 vai percorrer até o 5.
    
    for(i = 0; hexadecimal[i] !='\0'; i++){
        if(toupper(hexadecimal[i]) >= 'A'){
            temp = toupper(hexadecimal[i]) - 65 + 10;
        }else if(hexadecimal[i] <= '9'){
            temp = hexadecimal[i] - 48;
        } 
        
        decimal += temp * pow(16, tamanho_string);
        tamanho_string--;
    }
//Esse for varre a string até o diferente de 0. O toupper usei para funcionar independente do usuário digitar uma letra maiúscula e minúscula.

    printf("Esse número convertido para decimal fica: %d", decimal);
//Aqui exibe ao usuário a conversão.
}
