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

class TUData {
    private:
        const string valores_validos[4] = {"18-04-2005","31-12-2055","29-02-2012","01-01-2001"};
        const string valores_invalidos[5] = {"18/04/2005","02-03-15","29-02-2010","31-04-2071","12-12-1999"};
        
        Data *data;
        bool estado;

        void testarCenarioSucesso();
        void testarCenarioFalha();
        void setUp();
        void tearDown();
    public:
        const static bool FALHA = false, SUCESSO = true;

        bool run();
};

class TUCPF {
    private:
        const string valores_validos[4] = {"034.572.150-06", "967.336.320-04", "637.876.500-67", "169.986.650-32"}; //gerados com gerador aleatório de CPFs válidos
        const string valores_invalidos[4] = {"123.456.789-00", "034.572.150.06", "637.876.500-679", "169.986.650-3"};

        CPF *cpf;
        bool estado;

        void testarCenarioSucesso();
        void testarCenarioFalha();
        void setUp();
        void tearDown();
    public:
        const static bool FALHA = false, SUCESSO = true;

        bool run();
};

#endif 
