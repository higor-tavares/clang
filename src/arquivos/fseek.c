#include <stdio.h>
#include <stdlib.h>

struct cadastro {char nome[20], rua[20]; int idade;};
int main(){
    FILE *file = fopen("database/file","wb");
    if(file == NULL){
        printf("Error\n");
        exit(1);
    }
    struct cadastro c, cad[4] = {"Ricardo","Rua 1", 31, "Carlos", "Rua 2", 28, "Ana", "Rua 3", 45, "Bianca", "Rua 4", 32};
    fwrite(cad, sizeof(struct cadastro), 4, file);
    fclose(file);
    file = fopen("database/file", "rb");
    if(file == NULL){
        printf("Erro\n");
        exit(1);
    }
    fseek(file, 2 *sizeof(struct cadastro), SEEK_SET);
    fread(&c, sizeof(struct cadastro),1, file);
    printf("%s\n%s\n%d\n",c.nome,c.rua,c.idade);
    fclose(file);
    return 0;
}