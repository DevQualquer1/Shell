#ifndef COMMAND_CLASS_ECHO
#define COMMAND_CLASS_ECHO

#include "comandoModel.h"

class Comando_Echo: public Comando{
public:
    Comando_Echo();

    Comando_Echo(const char* parametros);

    void executar_comando() override;

};

#endif