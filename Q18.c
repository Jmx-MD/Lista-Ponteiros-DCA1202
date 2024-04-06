/*
Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
das implementações que você criou para os dois problemas de ordenação anteriores,
considerando apenas arrays de elementos tipo int e compare os resultados obtidos. O que se
conclui nesse caso?

*/
#include <stdio.h>
#include <time.h>

int main()
{
    int t1 =  clock(); //número de ciclos executados pelo processador (inicial)
    float c = CLOCKS_PER_SEC; //número de ciclos por segundo

    int i; //contador para função aleatória
    
    for(i=0;i<4;i++){//função aleatória para testar tempo de execução
        printf("Teste\n");
    }
    
    int t2 = clock(); //tempo final

    float t = t2 - t1; //diferença entre tempo final e tempo inicial (número total de ciclos da execução do código em main)
    float ts = t/c; //tempo em segundos
    
    printf("aproximadamente %f segundos de execução.",ts);
    

    return 0;
}
