#include <stdio.h>
#include <string.h>

#include "../FilesH/comandoEcho.h"

    Comando_Echo::Comando_Echo(){
        set_comandoBase("echo");
        set_parametros("");
    }

    Comando_Echo::Comando_Echo(const char* parametros){
        set_comandoBase("echo");
        set_parametros(parametros);
    }

    void Comando_Echo::executar_comando(){
        printf("%s\n", get_parametros());
    }