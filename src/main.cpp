#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "FilesH/comandoModel.h"
#include "FilesH/comandoEcho.h"

int main(){

    /* #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif */

    char linha[100];
    const char *arg1;
    const char *arg2;

    while (true){
        printf("myshell> ");
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0';
        
        arg1 = strtok(linha, " ");

        if(arg1 == NULL){
            continue;
        }

        arg2 = strtok(NULL, "");

        if(arg2 == NULL){
            arg2 = " ";
        }

        Comando_Echo echo(arg2);

        if (strcmp(arg1, "echo") == 0){
            echo.executar_comando();
        }
    }

    return 0;
}