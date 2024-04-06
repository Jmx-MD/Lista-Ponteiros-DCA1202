/*
Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos
correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo
usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor
contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A
função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos
presentes em cada vetor. Exemplo:
soma_vetores(vet1, vet2, resultado, 4);
*/

#include <stdio.h>

int *soma(int n,int a[n],int b[n],int c[n]){
    int i;//contador
    
    for(i=0;i<n;i++){
        c[i] = a[i] + b[i]; //soma elementos de a e b, pondo o resultado na mesma localização em c
    }
    return c;
}

int main()
{
    int x,i; //tamanho do vetor e contador
    int a[x], b[x], c[x];//vetores a serem utilizados
    
    printf("Tamanho dos vetores: ");
    scanf("%i",&x); //recebe tamanho dos vetores a serem somados, pelo usuário
    
    for(i=0;i<x;i++){ //pede para o usuário fornecer elementos do vetor
        printf("Elemento %i do primeiro vetor:",i+1);
        scanf("%i",&a[i]);
        printf("Elemento %i do segundo vetor:",i+1);
        scanf("%i",&b[i]);
    }
    
    int *s = soma(x,a,b,c); //soma os vetores fornecidos
    
    printf("O vetor resultante da soma é: ( ");
    for(i=0;i<x;i++){
        printf("%i ",s[i]); //imprime valores no vetor resultante
    }
    printf(")");
    
    
    return 0;
}

