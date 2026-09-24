#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");      // Comando para o Windows
    #else
        system("clear");    // Comando para Linux / macOS
    #endif
*/
    

class Comando{
    char comandoBase[21];
    char parametros[21];
public:

    virtual  void executar_comando() = 0;

    void set_comandoBase(char *comandoBase){
        strcpy(this->comandoBase, comandoBase);
    }

    void set_parametros(char *parametros){
        strcpy(this->parametros, parametros);
    }

};

class Comando_Echo: public Comando{
public:
    void executar_comando(){
        
    }


};

void menu(){

}

int main(){

    char arg1[21];
    char arg2[21];

    while (true){
        printf("myshell> ");
        scanf("%s", &arg1);
        scanf("%s", &arg2);

        if (strcmp(arg1, "echo") == 0){
            printf("%s\n", arg2);
        }
    }

    return 0;
}