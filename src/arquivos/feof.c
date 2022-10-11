#include <stdio.h>
#include <stdlib.h>

void save(){
    int v[5] = {1,2,3,4,5};
    FILE *F;
    F = fopen("arq.txt","w");
    if(F==NULL){
        printf("Erro!\n");
        exit(1);
    }
    for(int i = 0; i < 5; i++){
        fprintf(F,"%d\n", v[i]);
    }
    fclose(F);
    F = NULL;
}
void load(){
    int n;
    FILE *F;
    F= fopen("arq.txt", "r");
    if(F == NULL){
        printf("Erro\n");
        exit(1);
    }
    while(1){
        fscanf(F,"%d", &n);
        //desta forma e não como condicional no while o que causaria duplicidade da ultima linha
        if(feof(F)){
            break;
        }
        printf("%d\n",n);
    }
    fclose(F);
    F = NULL;
}

int main(){
    save();
    load();
    return 0;
}