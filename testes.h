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

class TUEstado {
    private:
        const string valores_validos[3] = {"Previsto", "Liquidado", "Inadimplente"};
        const string valores_invalidos[5] = {"2", "Banana", "Liquidad", "inadimplente", "Pneumoultramicroscopicossilicovulcanoconiose"};

        Estado *estado_teste;
        bool estado;

        void testarCenarioSucesso();
        void testarCenarioFalha();
        void setUp();
        void tearDown();
    public:
        const static bool SUCESSO = true, FALHA = false;

        bool run();
};

class TUCodigoDePagamento {
    private:
        const string valores_validos[3] = {"12345678", "18375801", "24274383"};
        const string valores_invalidos[3] = {"01234567", "123456789", "a2345678"};

        CodigoDePagamento *codigo_de_pagamento;
        bool estado;

        void testarCenarioSucesso();
        void testarCenarioFalha();
        void setUp();
        void tearDown();

    public:
        const static bool SUCESSO = true, FALHA = false;

        bool run();
};


class TUPagamento {
    private:
        const string valores[4] = {"35", "12345678", "30-03-2030", "Inadimplente"};

        Pagamento *pagamento;
        Percentual *percentual;
        CodigoDePagamento *codigo;
        Data *data;
        Estado *estado_teste;
        bool estado;

        void test();
        void setUp();
        void tearDown();
    public:
        const static bool SUCESSO = true, FALHA = false;

        bool run();
};

class TUConta {
    private:
        const std::string valores[3] = {"12345678900", "João da Silva", "senha123"};

        Conta *conta;
        bool estado;

        void test();
        void setUp();
        void tearDown();
    public:
        const static bool SUCESSO = true, FALHA = false;

        bool run();
};

class TUTitulo {
    private:
        const std::string valores[6] = {"1", "Empresa X", "Agricultura", "01-01-2024", "01-02-2024", "1000.0"};

        Titulo *titulo;
        bool estado;

        void test();
        void setUp();
        void tearDown();
    public:
        const static bool SUCESSO = true, FALHA = false;

        bool run();
};
#endif 
