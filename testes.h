#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUSenha {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Senha *senha;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUSetor {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Setor *setor;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNome {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Nome *nome;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUPercentual {
private:
    const static int VALOR_VALIDO;
    const static int VALOR_INVALIDO;

    Percentual *percentual;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

#endif 
