#include <stdio.h>
// run comparacoes first
/*

Isso ocorre por acessar um ponto da memória não autorizado para sua aplicação.

Quando sua aplicação está rodando, o sistema operacional libera acesso à memória virtual. Ao contrário do que muita gente pensa, você não tem acesso à memória física (RAM) diretamente, na verdade pode ser que nem esteja na RAM. É um problema do sistema operacional colocar onde quiser, ele organiza a memória como quiser. Ele colocará seu código, área estática de dados, a pilha e depois vai alocando outros trechos dinamicamente conforme a necessidade, o heap. A memória física nem costuma estar em sequência, mas parece estar. Quando sua aplicação acessa parece que a memória toda do computador é dela, por isso é chamada de memória virtual, os endereços não são os físicos. Claro que a memória precisa estar reservada para seu uso.

Então qualquer endereço que seja acessado pela aplicação e não estava reservada é considerado um endereço inválido. Assim há uma proteção às outras aplicações. A memória é dividida em segmentos, então a tentativa de acessar um segmento que não lhe pertence causa uma falha de segmentação.

Em C ou C++ é comum ter este tipo de problema porque o uso dos ponteiros é muito livre e direto. É relativamente fácil fazer uma variável ponteiro ter um valor inválido. Principalmente por esquecer de inicializar o ponteiro, mas também:

por fazer uma aritmética errada ou pegar valor aleatório (wild pointer),
tratar um outro dado como se fosse ponteiro,
usar um endereço que era existente e não é mais (dangling pointer),
stack overflow,
acessar endereço além de uma sequencia (array), que em outras linguagens é o out of range, especialmente em string sem terminador,
modificar área estática, especialmente literais strings,
entre outros.
É muito comum ocorrer um segmentation fault por causa de um comportamento indefinido deixado no código.

Mas sabe qual é o endereço que mais causa esse problema? É o 0, ou seja, o nulo. Nesse ponto é igual à exceção Null Pointer ou Null Reference de outras linguagens. Essas linguagens não são tão liberais com o uso de ponteiros, costumam gerenciar o acesso à memória, mas costumam permitir que um objeto possa ser nulo. Linguagens mais modernas estão evitando isso e só deixando o nulo ocorrer por escolha do programador onde faça sentido.

Hoje os compiladores possuem opções para ajudar identificar potenciais problemas de ponteiros e nem deixam fazer operações que criarão problemas. Existem ferramentas extras de análise estática ou dinâmica que ajudam ainda mais.

Aparecendo esse erro já comece ver seus ponteiros, o problema está em um deles.
*/
#define ADDR 0x7ff7baec5380;
int main(void)
{
    int *p = (int *)ADDR;
    printf("O conteúdo na posicao %p eh %d\n", p, *p);
    return 0;
}