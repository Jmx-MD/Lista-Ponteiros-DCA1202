/* 
q = *p;
i = (*p)++ + *q;

Essas afirmações estão incorretas.

q = *p; 
Pois q se trata de um endereço, e *p se trata do conteúdo da variável à qual p aponta.

i = (*p)++ + *q;
Pois não é o mesmo que "(*p)++; i= *p + *q;", onde é acrescido ao conteúdo *p e então ao conteúdo *q. Executar a linha anterior ocasionará um erro de sintaxe.

*/
