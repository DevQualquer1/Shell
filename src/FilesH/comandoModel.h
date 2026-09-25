#ifndef COMMAND_MODEL_CLASS
#define COMMAND_MODEL_CLASS

class Comando {
private:
    char comandoBase[21];
    char parametros[21];

protected:
    virtual void executar_comando() = 0;

    void set_comandoBase(const char* comandoBase);
    void set_parametros(const char* parametros);

    const char* get_parametros();
};

#endif