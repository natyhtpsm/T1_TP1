#include "testes.h"
#include <string.h>

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