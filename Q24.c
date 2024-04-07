/*
Um usuário precisa implementar o controle de uma matriz de leds com 8 x 8 elementos. Para
isso, ele criou um programa em C dotado de uma matriz da forma

unsigned char m[8][8];
para armazenar os estados dos leds. Como existem apenas dois estados possíveis para os leds
(aceso ou apagado), ele assumiu que leds acessos seriam denotados pelo inteiro "1" nessa matriz
e leds apagados seriam denotados pelo inteiro "0".
Ocorre que a função que controla os leds exige que a informação que controla a matriz seja
enviada via porta serial usando uma função que recebe um único inteiro não sinalizado de
64 bits, da forma send(unsigned long estado). Nesse inteiro, os bytes mais significativos deverão
guardar os estados das linhas iniciais da matriz de leds, enquanto os bytes menos significativos
devem guardar os estados das linhas finais da matriz. Assim, é necessário que cada estado
previsto na matriz m seja codificado em um bit correspondente na variável enviada pela função.
Crie um programa em linguagem C para realizar essa codificação e explique na forma de
comentários como sua codificação da matriz m na variável de 64 bits foi realizada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h> 

int main()
{
    unsigned char m[8][8]; //matriz de leds
    char est[8]; //lista de estados das linhas
    int i,j,cl; //contadores
    
    
    printf("Digite se os leds estão acesos (1) ou apagados (0).\n");
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            scanf("%s",&m[i][j]); //recebe valores dos leds e os põe na matriz em forma de string
        }
    }
    unsigned long e; //estado da linha
    for(i=0;i<8;i++){
        cl=0; //após primeiro ciclo, remove dados do contador da linha anterior
        for(j=0;j<8;j++){
            if(m[i][j]=='1'){
                cl++; //contador de leds ligados na linha
            }
        }
        if(cl>3){
            est[i]='1'; //se mais da metade da linha estiver ligada, o estado da linha é ligada (1)
        }else{
            est[i]='0'; //caso contrário, está desligada (0)
        }
    }
    send(*m[8],est,1,MSG_OOB); //envia dados dos leds
    

    return 0;
}
