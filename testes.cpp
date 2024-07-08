#include "testes.h"
#include <string.h>

using namespace std;

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

void TUConta::setUp() {
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown() {
    delete conta;
}

void TUConta::test() {
    std::string valor_cpf = valores[0];
    std::string valor_nome = valores[1];
    std::string valor_senha = valores[2];

    conta->setCpf(valor_cpf);
    conta->setNome(valor_nome);
    conta->setSenha(valor_senha);

    if (conta->getCpf() != valor_cpf || conta->getNome() != valor_nome || conta->getSenha() != valor_senha) {
        estado = FALHA;
    }
}

bool TUConta::run() {
    setUp();
    test();
    tearDown();
    return estado;
}

void TUTitulo::setUp() {
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown() {
    delete titulo;
}

void TUTitulo::test() {
    std::string valor_codigo = valores[0];
    std::string valor_emissor = valores[1];
    std::string valor_setor = valores[2];
    std::string valor_emissao = valores[3];
    std::string valor_vencimento = valores[4];
    double valor_valor = std::stod(valores[5]);

    titulo->setCodigo(valor_codigo);
    titulo->setEmissor(valor_emissor);
    titulo->setSetor(valor_setor);
    titulo->setEmissao(valor_emissao);
    titulo->setVencimento(valor_vencimento);
    titulo->setValor(valor_valor);

    if (titulo->getCodigo() != valor_codigo || titulo->getEmissor() != valor_emissor || titulo->getSetor() != valor_setor || titulo->getEmissao() != valor_emissao || titulo->getVencimento() != valor_vencimento || titulo->getValor() != valor_valor) {
        estado = FALHA;
    }
}

bool TUTitulo::run() {
    setUp();
    test();
    tearDown();
    return estado;
}

void TUCodigoDeTitulo::setUp() {
    codigo_de_titulo = new CodigoDeTitulo();
    estado = SUCESSO;
}

void TUCodigoDeTitulo::tearDown() {
    delete codigo_de_titulo;
}

void TUCodigoDeTitulo::testarCenarioSucesso() {
    for (const std::string &valor : valores_validos) {
        try {
            codigo_de_titulo->setValor(valor.c_str());
            if (codigo_de_titulo->getValor() != valor) {
                estado = FALHA;
            }
        } catch (std::invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUCodigoDeTitulo::testarCenarioFalha() {
    for (const std::string &valor : valores_invalidos) {
        try {
            codigo_de_titulo->setValor(valor.c_str());
            estado = FALHA;
        } catch (std::invalid_argument &excecao) {
            
        }
    }
}

bool TUCodigoDeTitulo::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const int TUDinheiro::VALOR_VALIDO = 9876543;
const int TUDinheiro::VALOR_INVALIDO = -10;

void TUDinheiro::setUp() {
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}

void TUDinheiro::tearDown() {
    delete dinheiro;
}

void TUDinheiro::testarCenarioSucesso() {
    try {
        dinheiro->setValor(VALOR_VALIDO);
        if (dinheiro->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioFalha() {
    try {
        dinheiro->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUDinheiro::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}