DESAFIO TARGET - ESTÁGIO 2024

Olá, me chamo Matheus Mosso Von Zuben e neste repositório estão minhas respostas do DESAFIO TARGET. Desde já agradeço pela oportunidade de inscrição e realização do teste. Respostas abaixo:

1) O valor da variável soma é 91

2) SEQUÊNCIA DE FIBONACCI

#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int n)
{
int i,ant,atual,seg;
if ( n <= 2 ) return(1);
else
{
    ant = 1;
    atual = 1;
    for(i=3; i <= n; i++)
    {
        seg = atual + ant;
        ant = atual;
        atual = seg;
    }
}
    return(atual);
}

void main(){
    int i, num;

    printf("Numero que deseja saber o Fibonacci: ");
    scanf("%i", &num);


    for(i=1; i<=num;i++){
        printf("%i\t", Fibonacci(i));
    }
}

3) a. 9; b. 128; c. 49; d. 96; e. 13; f. 20

4) Primeiro ligaria dois interruptores e esperaria um tempo, logo após desligaria algum dos dois que foram ligados e então já faria minha primeira ida a sala. Caso a sala estivesse acesa saberia que o interruptor que deixei ligado seria aquele que controlava esta sala, caso estivesse apagada, ficaria entre o que desliguei e o que mantive desligado. Voltaria aos interruptores, ligaria o mesmo que antes tinha ligado, deixaria por um tempo e desligaria novamente e faria minha segunda ida, dessa vez em outra sala. Caso a lâmpada estivesse quente saberia que o interruptor que desliguei logo antes de sair dos interruptores seria o certo para aquela sala, e o que sobrou seria o que mantive apagado durante todo o desafio.

5) INVERTER STRING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inverter(char str[]){
    int i, temp, fim, tam = strlen(str);
    //strlen, responsável por determinar o tamanho da string.
    fim = tam - 1;
    for(i=0;i<tam/2;i++){
        temp = str[i];
        str[i] = str[fim];
        str[fim] = temp;
        fim--;
    }
}

void main(){
	char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    inverter(palavra);
    printf("%s", palavra);
}