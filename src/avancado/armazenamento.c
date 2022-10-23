#include <stdio.h>
#include <stdlib.h>
/**
 * auto - padrão em chamadas locais
 * extern - visivel em outros arquivos
 * static padrão para variaveis globais (aplicado a funcao faz com que sejam apenas locais)
 * register (raramente utilizada, o compilador pode ignorar) é mantida no registrador da CPU e não na memoria RAM
 * não é possivel usar & e deve ser um tipo pequeno pois os registradores tem tamanho limitado
 * 
 * modificador de tipo
 * volatile (Não otimize o codigo pois essa variavel pode ser modificada por outros programas/funcoes)
*/



static void metodoPrivado(){
    printf("Outros arquivos não podem me acessar!\n");
}

int main(){
    metodoPrivado();
}