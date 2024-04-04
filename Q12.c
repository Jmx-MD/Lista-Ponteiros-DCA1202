/*
Suponha que as seguintes declarações tenham sido realizadas:

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

Identifique quais dos seguintes comandos é válido ou inválido:
aloha[2] = value; - Inválido (não foi estabelecido valor para aloha[2], logo foi impresso 0)
scanf("%f", &aloha); - Válido (imprime o endereço do primeiro item da lista "aloha")
aloha = "value"; - Válido
printf("%f", aloha); - Válido (imprime o primeiro item da lista)
coisas[4][4] = aloha[3]; - Válido (nenhum dos valores foi estabelecido, logo ambos serão 0)
coisas[5] = aloha; - Válido (foram impressos os mesmos valores)
pf = value; - Inválido (pf é o endereço de aloha, não seu conteúdo)
pf = aloha; - Válido (aloha é o ponteiro de seus itens).

*/

#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    
    printf("%f %f %p %f %d",aloha,coisas,pf,value,i);
    
    return 0;
}
