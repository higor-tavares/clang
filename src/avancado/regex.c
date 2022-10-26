#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>

#define CPF_REGEX  "([0-9]{3}\\.?){3}-?[0-9]{2}"

void print_result(int return_value, char * value){
  if (return_value == 0){
    printf("Pattern found. : %s\n", value);
  }
  else if (return_value == REG_NOMATCH){
    printf("Pattern not found. : %s\n", value);
  }
  else{
    printf("An error occured.\n");
  }
}

void validate(char * cpf){
    regex_t regex;
    int match;

     if (regcomp(&regex, CPF_REGEX, REG_EXTENDED) != 0){
        printf("Compilation error.\n");
        exit(1);
    }

    match  = regexec(&regex, cpf , 0, NULL, 0);
    print_result(match, cpf);
}
int main(){
    //size = string + 1 because \0 character
    char cpf1[15] = "506.743.070-20";
    char cpf2[15] = "69134156054";
    char cpf3[15] = "60421107";
    validate(cpf1);
    validate(cpf2);
    validate(cpf3);
    return 0;
}