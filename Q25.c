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
#include <stdio.h>
#include <stdlib.h>

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
    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            for(w=0;w<z;w++){
                scanf("%i",&m[i][j][w]); //recebe valores do usuário 
            }
        }
    }
    
    char imp1,imp2,imp3; //dimensões caso o usuário deseje imprimir algum plano
    int r1,r2,r3;//valores para acessar plano
    char resp1;//resposta do usuário à pergunta seguinte
    
    printf("Deseja imprimir algum plano? (Digite 's' para 'sim' e 'n' para 'não')\n");
    scanf("\n%s",&resp1);
    
    if(resp1=='s'){
        printf("Digite o plano que deseja imprimir (x y 0,0 y z, ou x 0 z).\n");
        scanf("\n%s",&imp1);
        scanf("\n%s",&imp2);
        scanf("\n%s",&imp3);
        
        //adquire valores a serem considerados na impressão
        if(imp1!='0'){
            r1=x;
            if(imp2!='0'){//plano xy
                r2=y;
                r3=0;
                
                for(i=0;i<r1;i++){ //imprime plano 
                    for(j=0;j<r2;j++){
                        printf("%p",m[i][j]);
                        printf("\n"); //pular a cada linha finalizada
            }
            
        }
            }else{//plano xz
                r2=0;
                r3=z;
                
                for(i=0;i<r1;i++){ //imprime plano 
                    for(j=0;j<r3;j++){
                        printf("%p",m[i][j]);
                        printf("\n"); //pular a cada linha finalizada
            }
                
            }
        }
            
        }else{//plano yz
            r1=0;
            r2=y;
            r3=z;
            
            for(i=0;i<r2;i++){ //imprime plano 
                    for(j=0;j<r3;j++){
                        printf("%p",m[i][j]);
                        printf("\n"); //pular a cada linha finalizada
            }
            
        }}
    }
        
        
    
    if(resp1=='n'){
        printf("\nOk!");
    }
    if(resp1 !='s' && resp1 !='n'){
        printf("Por favor, digite uma resposta válida.\n");
        scanf("%s",&resp1);
    }
    
    /*para alterar algum valor da matriz, utilizar o seguinte formato:
        
        m[i][j][z] = novo_valor;
        
        Onde: 
        i = localização do item no eixo x
        j = localização do item no eixo y
        w = localização do item no eixo z
    
    */
    
    free(m);
    
    return 0;
}
