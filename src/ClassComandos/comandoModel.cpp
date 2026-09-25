#include "../FilesH/comandoModel.h"
#include <string.h>

void Comando::set_comandoBase(const char* comandoBase) {
    strcpy(this->comandoBase, comandoBase);
}

void Comando::set_parametros(const char* parametros) {
    strcpy(this->parametros, parametros);
}

const char* Comando::get_parametros() {
    return parametros;
}