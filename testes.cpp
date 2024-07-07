#include "testes.h"
#include <string.h>

using namespace std;
#include <iostream>

const string TUSenha::VALOR_VALIDO = "123789";
const string TUSenha::VALOR_INVALIDO = "123";

void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    delete senha;
}

void TUSenha::testarCenarioSucesso() {
    try {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha() {
    try {
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUSenha::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUSetor::VALOR_VALIDO = "Agricultura";
const string TUSetor::VALOR_INVALIDO = "InvalidSetor";

void TUSetor::setUp() {
    setor = new Setor();
    estado = SUCESSO;
}

void TUSetor::tearDown() {
    delete setor;
}

void TUSetor::testarCenarioSucesso() {
    try {
        setor->setValor(VALOR_VALIDO);
        if (setor->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSetor::testarCenarioFalha() {
    try {
        setor->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUSetor::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUNome::VALOR_VALIDO = "Fulano de Tal";
const string TUNome::VALOR_INVALIDO = "";

void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown() {
    delete nome;
}

void TUNome::testarCenarioSucesso() {
    try {
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha() {
    try {
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUNome::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const int TUPercentual::VALOR_VALIDO = 85;
const int TUPercentual::VALOR_INVALIDO = -10;

void TUPercentual::setUp() {
    percentual = new Percentual();
    estado = SUCESSO;
}

void TUPercentual::tearDown() {
    delete percentual;
}

void TUPercentual::testarCenarioSucesso() {
    try {
        percentual->setValor(VALOR_VALIDO);
        if (percentual->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUPercentual::testarCenarioFalha() {
    try {
        percentual->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUPercentual::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUData::setUp() {
    estado = SUCESSO;
    data = new Data();
}

void TUData::tearDown() {
    delete data;
}

void TUData::testarCenarioSucesso() {
    for (string valor : valores_validos) {
        try {
            data->setValor(valor);
            if (data->getValor() != valor) {
                estado = FALHA;
            }
        }
        catch (invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUData::testarCenarioFalha() {
    for (string valor : valores_invalidos) {
        try {
            data->setValor(valor);
            estado = FALHA;
        }
        catch (invalid_argument &excecao) {
            return;
        }
    }
}

bool TUData::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCPF::setUp() {
    cpf = new CPF();
    estado = SUCESSO;
}

void TUCPF::tearDown() {
    delete cpf;
}

void TUCPF::testarCenarioSucesso() {
    for (string valor : valores_validos) {
        try {
            cpf->setValor(valor);
            if (cpf->getValor() != valor) {
                estado = FALHA;
            }
        }
        catch (invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUCPF::testarCenarioFalha() {
    for (string valor : valores_invalidos) {
        try {
            cpf->setValor(valor);
            estado = FALHA;
        }
        catch (invalid_argument &excecao) {
            return;
        }
    }
}

bool TUCPF::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEstado::setUp() {
    estado_teste = new Estado;
    estado = SUCESSO;
}

void TUEstado::tearDown() {
    delete estado_teste;
}

void TUEstado::testarCenarioSucesso() {
    for (string valor : valores_validos) {
        try {
            estado_teste->setValor(valor);
            if (estado_teste->getValor() != valor) {
                estado = FALHA;
            }
        }
        catch (invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUEstado::testarCenarioFalha() {
    for (string valor : valores_invalidos) {
        try {
            estado_teste->setValor(valor);
            estado = FALHA;
        }
        catch (invalid_argument &excecao) {
            return;
        }
    }
}

bool TUEstado::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodigoDePagamento::setUp() {
    codigo_de_pagamento = new CodigoDePagamento();
    estado = SUCESSO;
}

void TUCodigoDePagamento::tearDown() {
    delete codigo_de_pagamento;
}

void TUCodigoDePagamento::testarCenarioSucesso() {
    for (string valor : valores_validos) {
        try {
            codigo_de_pagamento->setValor(valor);
            if (codigo_de_pagamento->getValor() != valor) {
                estado = FALHA;
            }
        }
        catch (invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUCodigoDePagamento::testarCenarioFalha() {
    for (string valor : valores_invalidos) {
        try {
            codigo_de_pagamento->setValor(valor);
            estado = FALHA;
        }
        catch (invalid_argument &excecao) {
            return;
        }
    }
}

bool TUCodigoDePagamento::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUPagamento::setUp() {
    pagamento = new Pagamento();
    percentual = new Percentual();
    codigo = new CodigoDePagamento();
    data = new Data();
    estado_teste = new Estado();
    estado = SUCESSO;
}

void TUPagamento::tearDown() {
    delete pagamento;
    delete percentual;
    delete codigo;
    delete data;
    delete estado_teste;
}

void TUPagamento::test() {
    int valor_percentual = stoi(valores[0]);
    string valor_codigo = valores[1], valor_data = valores[2], valor_estado = valores[3];

    percentual->setValor(valor_percentual);
    codigo->setValor(valores[1]);
    data->setValor(valores[2]);
    estado_teste->setValor(valores[3]);

    pagamento->setPercentual(*percentual);
    pagamento->setCodigo(*codigo);
    pagamento->setData(*data);
    pagamento->setEstado(*estado_teste);

    if (pagamento->getPercentual().getValor() != valor_percentual || pagamento->getCodigo().getValor() != valor_codigo || pagamento->getData().getValor() != valor_data || pagamento->getEstado().getValor() != valor_estado) {
        estado = FALHA;
    }
}

bool TUPagamento::run() {
    setUp();
    test();
    tearDown();
    return estado;
}