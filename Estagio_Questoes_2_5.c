#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//SEQUÊNCIA DE FIBONACCI
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

//INVERTER STRING

void inverter(char str[]){
    int i, temp, fim, tam = strlen(str);
    //strlen, responsável por retornar um inteiro, sendo o tamanho da string
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
