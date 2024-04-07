/*
Um programador precisa desenvolver uma aplicação em linguagem C para manipular matrizes
capazes de armazenar representações de modelos tridimensionais.
Entende-se que o tamanho da matriz é definido pelo usuário e esta deve ser alocada
dinamicamente usando malloc() em tempo de execução. O processo de criar um modelo na
matriz consiste em atribuir aos seus elementos os valores inteiros “1” ou “0” para simbolizar
que há ou não parte do modelo naquela posição. Uma analogia para o modelo seria que a
criação funciona como no jogo "Minecraft", onde "0" representaria a ausência de objeto e "1"
representaria a presença de objetos.
Nesta aplicação, as matrizes devem ser definidas como tipos de dados int. Isto posto, pede-se
que o programador prepare os algoritmos de alocação dinâmica (usando malloc()/free()) para
guardar os dados da matriz tridimensional e crie um programa de testes para verificar se a sua
implementação foi realizada corretamente de modo a garantir as seguintes condições:
a. O usuário do programa de testes deverá poder fornecer o tamanho da matriz tridimensional
que deseja manipular, inserindo as dimensões da altura, largura e profundidade desta.
b. O usuário do programa de testes poderá solicitar a impressão de um dos planos da matriz
tridimensional.
c. O usuário do programa de testes poderá modificar o estado de um dos elementos da matriz.
Insira no seu código comentários para indicar como as posições da matriz poderão ser
acessadas.
*/
#include <stdio.h> //inclui biblioteca padrão
#include <stdlib.h> //inclui biblioteca padrão
#include <malloc.h> //inclui biblioteca com função malloc()

int main()
{
    int x,y,z;//dimensões da matriz
    int i,j,w; //contadores
    printf("Digite a largura, altura e profundidade da matriz, respectivamente.\n");
    scanf("%i%i%i",&x,&y,&z); //recebe valores das dimensões da matriz
    
    int ***m = (int ***)malloc(x * sizeof(int *));//aloca espaço para a dimensão x
  
    for (int i = 0; i < y; i++) {
        m[i] = (int **)malloc(y * sizeof(int));//aloca espaço para os itens da dimensão y
        
        for (int j = 0; j < z; j++) {
        m[i][j] = (int *)malloc(z * sizeof(int));//aloca espaço para os itens da dimensão z
    }
    
    }
    
    printf("Digite os itens da matriz como se estivessem em uma linha só.\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            for(w=0;w<z;w++){
                scanf("%i",&m[i][j][w]); //recebe valores do usuário 
            }
        }
    }
    
    /* Para imprimir um plano, utilize uma das funções abaixo (remova do comentário e execute o 
        programa normalmente).
        
        //Plano xy
            for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                printf("%i",m[i][j][0]);
            }
            printf("\n");
            }
    
    
        //Plano xz
            for(i=0;i<x;i++){
            for(w=0;w<z;w++){
                printf("%i",m[i][0][w]);
            }
            printf("\n");
            }
    
    
        //Plano yz
            for(j=0;j<y;j++){
            for(w=0;w<z;w++){
                printf("%i",m[0][j][w]);
            }
            printf("\n");
            }
    
    */
    
    
    
    /*para alterar algum valor da matriz, utilizar o seguinte formato:
        
        m[i][j][z] = novo_valor;
        
        Onde: 
        i = localização do item no eixo x
        j = localização do item no eixo y
        w = localização do item no eixo z
    
    */
    
    free(m); //librera espaço utilizado pela matriz após uso
    
    return 0;
}
