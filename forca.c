#include <stdio.h>
#include <string.h>

int main(){
    char palavraSecreta[20];

    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    do{
        for(int i = 0; i < strlen(palavraSecreta); i++){

            int achou = 0;

            printf("Estou vendo a letra secreta %c\n", palavraSecreta[i]);

            for(int j = 0;j < tentativas; j++){
                printf("-> Chute %c\n", chutes[j]);

                if(chutes[j] == palavraSecreta[i]){
                    printf("---Chute Correto!\n");
                    achou = 1;
                    break;
                }
            }
            if (achou){
                printf("%c ", palavraSecreta[i]);
            }else {
                printf("_ ");
            }
            
        }
        printf("\n");
        char chute = 3;
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;

        //Varrendo o Array e procurando o chute na palavraSecreta
        //for(int i = 0; i < strlen(palavraSecreta); i++){
        //    if(palavraSecreta[i] == chute){
        //       printf("%d", i);
        //   }
        //}

    } while (!acertou && !enforcou); 


}